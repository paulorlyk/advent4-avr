
/*	program ADVENT.C					*\
\*	WARNING: "advent.c" allocates GLOBAL storage space by	*\
\*		including "advdef.h".				*\
\*		All other modules use "advdec.h"		*/

#include "adventure.h"

#include <avr/eeprom.h>

#include <stdio.h> /* drv = 1.1st file 2.def 3.A	*/
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#include "advent.h"  /* #define preprocessor equates	*/
#include "advword.h" /* definition of "word" array	*/
#include "advcave.h" /* definition of "cave" array	*/
#include "advdef.h"

#define setmem(l, s, c) memset(l, c, s)

void advent_main(bool debug)
{
	dbugflg = debug;

	initplay();
    if (yes(65, 1, 0))
		limit = 1000;
	else
		limit = 330;
	saveflg = 0;
	srand(511); /* seed random	*/
	while (!saveflg)
		turn();
	if (saveflg)
		saveadv();
}

/* ************************************************************	*/


/*
	Initialization of adventure play variables
*/
void initplay(void)
{
#define __STATIC_INIT(dst, ...)                         \
    do {                                                \
        static const PROGMEM int data[] = __VA_ARGS__;  \
        memcpy_P((dst), data, sizeof(data));            \
    } while(0)                                          \

	turns = 0;

	/* initialize location status array */
	setmem(cond, (sizeof(int)) * MAXLOC, 0);
    __STATIC_INIT(&cond[1], {5,1,5,5,1,1,5,17,1,1,});
    __STATIC_INIT(&cond[13], {32,0,0,2,0,0,64,2,});
    __STATIC_INIT(&cond[21], {2,2,0,6,0,2,});
    __STATIC_INIT(&cond[31], {2,2,0,0,0,0,0,4,0,2,});
    __STATIC_INIT(&cond[42], {128,128,128,128,136,136,136,128,128,});
    __STATIC_INIT(&cond[51], {128,128,136,128,136,0,8,0,2,});
    __STATIC_INIT(&cond[79], {2,128,128,136,0,0,8,136,128,0,2,2,});
    __STATIC_INIT(&cond[95], {4,0,0,0,0,1,});
    __STATIC_INIT(&cond[113], {4,0,1,1,});
    __STATIC_INIT(&cond[122], {8,8,8,8,8,8,8,8,8,});

	/* initialize object locations */
	setmem(place, (sizeof(int)) * MAXOBJ, 0);
    __STATIC_INIT(&place[1], {3,3,8,10,11,0,14,13,94,96,});
    __STATIC_INIT(&place[11], {19,17,101,103,0,106,0,0,3,3,});
    __STATIC_INIT(&place[23], {109,25,23,111,35,0,97,});
    __STATIC_INIT(&place[31], {119,117,117,0,130,0,126,140,0,96,});
    __STATIC_INIT(&place[50], {18,27,28,29,30,});
    __STATIC_INIT(&place[56], {92,95,97,100,101,0,119,127,130,});

	/* initialize second (fixed) locations */
	setmem(fixed, (sizeof(int)) * MAXOBJ, 0);
    __STATIC_INIT(&fixed[3], {9,0,0,0,15,0,-1,});
    __STATIC_INIT(&fixed[11], {-1,27,-1,0,0,0,-1,});
    __STATIC_INIT(&fixed[23], {-1,-1,67,-1,110,0,-1,-1,});
    __STATIC_INIT(&fixed[31], {121,122,122,0,-1,-1,-1,-1,0,-1,});
    __STATIC_INIT(&fixed[62], {121,-1,});

	/* initialize default verb messages */
    __STATIC_INIT(actmsg, {0,24,29,0,33,0,33,38,38,42,14,});
    __STATIC_INIT(&actmsg[11], {43,110,29,110,73,75,29,13,59,59,});
    __STATIC_INIT(&actmsg[21], {174,109,67,13,147,155,195,146,110,13,13,});

	/* initialize various flags and other variables */
	setmem(visited, (sizeof(int)) * MAXLOC, 0);
	setmem(prop, (sizeof(int)) * MAXOBJ, 0);
	setmem(&prop[50], (sizeof(int)) * (MAXOBJ - 50), 0xff);
	wzdark = closed = closing = holding = detail = 0;
	limit = 100;
	tally = 15;
	tally2 = 0;
	newloc = 1;
	loc = oldloc = oldloc2 = 3;
	knfloc = 0;
	chloc = 114;
	chloc2 = 140;
	/*	dloc[DWARFMAX-1] = chloc				*/
    __STATIC_INIT(dloc, {0,19,27,33,44,64,114,});
    __STATIC_INIT(odloc, {0,0,0,0,0,0,0,});
	dkill = 0;
    __STATIC_INIT(dseen, {0,0,0,0,0,0,0,});
	clock1 = 30;
	clock2 = 50;
	panic = 0;
	bonus = 0;
	numdie = 0;
	daltloc = 18;
	lmwarn = 0;
	foobar = 0;
	dflag = 0;
	gaveup = 0;
	saveflg = 0;

#undef __STATIC_INIT
}

EEMEM struct _game_data {
    uint16_t initialized;

    int turns;
    int loc;
    int oldloc;
    int oldloc2;
    int newloc;             /* location variables */
    int cond[MAXLOC];       /* location status	*/
    int place[MAXOBJ];      /* object location	*/
    int fixed[MAXOBJ];      /* second object loc	*/
    int visited[MAXLOC];    /* >0 if has been here	*/
    int prop[MAXOBJ];       /* status of object	*/
    int tally;
    int tally2;             /* item counts		*/
    int limit;              /* time limit		*/
    int lmwarn;             /* lamp warning flag	*/
    int wzdark;
    int closing;
    int closed;             /* game state flags	*/
    int holding;            /* count of held items	*/
    int detail;             /* LOOK count		*/
    int knfloc;             /* knife location	*/
    int clock1;
    int clock2;
    int panic;              /* timing variables	*/
    int dloc[DWARFMAX];     /* dwarf locations	*/
    int dflag;              /* dwarf flag		*/
    int dseen[DWARFMAX];    /* dwarf seen flag	*/
    int odloc[DWARFMAX];    /* dwarf old locations	*/
    int daltloc;            /* alternate appearance	*/
    int dkill;              /* dwarves killed	*/
    int chloc;
    int chloc2;             /* chest locations	*/
    int bonus;              /* to pass to end	*/
    int numdie;             /* number of deaths	*/
    int object1;            /* to help intrans.	*/
    int gaveup;             /* 1 if he quit early	*/
    int foobar;             /* fie fie foe foo...	*/
} _saved_game = { 0 };

#define EEPROM_INIT_MAGIC (0x4AADU)

/*
		save adventure game
*/
void saveadv(void)
{
    eeprom_update_block(&turns,      &_saved_game.turns, sizeof(int));
	eeprom_update_block(&loc,        &_saved_game.loc, sizeof(int));
	eeprom_update_block(&oldloc,     &_saved_game.oldloc, sizeof(int));
	eeprom_update_block(&oldloc2,    &_saved_game.oldloc2, sizeof(int));
	eeprom_update_block(&newloc,     &_saved_game.newloc, sizeof(int));      /* location variables */
	eeprom_update_block(&cond[0],    &_saved_game.cond[0], sizeof(int) * MAXLOC); /* location status	*/
	eeprom_update_block(&place[0],   &_saved_game.place[0], sizeof(int) * MAXOBJ); /* object location	*/
	eeprom_update_block(&fixed[0],   &_saved_game.fixed[0], sizeof(int) * MAXOBJ); /* second object loc	*/
	eeprom_update_block(&visited[0], &_saved_game.visited[0], sizeof(int) * MAXLOC); /* >0 if has been here	*/
	eeprom_update_block(&prop[0],    &_saved_game.prop[0], sizeof(int) * MAXOBJ); /* status of object	*/
	eeprom_update_block(&tally,      &_saved_game.tally, sizeof(int));
	eeprom_update_block(&tally2,     &_saved_game.tally2, sizeof(int));      /* item counts		*/
	eeprom_update_block(&limit,      &_saved_game.limit, sizeof(int));      /* time limit		*/
	eeprom_update_block(&lmwarn,     &_saved_game.lmwarn, sizeof(int));      /* lamp warning flag	*/
	eeprom_update_block(&wzdark,     &_saved_game.wzdark, sizeof(int));
	eeprom_update_block(&closing,    &_saved_game.closing, sizeof(int));
	eeprom_update_block(&closed,     &_saved_game.closed, sizeof(int));      /* game state flags	*/
	eeprom_update_block(&holding,    &_saved_game.holding, sizeof(int));      /* count of held items	*/
	eeprom_update_block(&detail,     &_saved_game.detail, sizeof(int));      /* LOOK count		*/
	eeprom_update_block(&knfloc,     &_saved_game.knfloc, sizeof(int));      /* knife location	*/
	eeprom_update_block(&clock1,     &_saved_game.clock1, sizeof(int));
	eeprom_update_block(&clock2,     &_saved_game.clock2, sizeof(int));
	eeprom_update_block(&panic,      &_saved_game.panic, sizeof(int));      /* timing variables	*/
	eeprom_update_block(&dloc[0],    &_saved_game.dloc[0], sizeof(int) * DWARFMAX);  /* dwarf locations	*/
	eeprom_update_block(&dflag,      &_saved_game.dflag, sizeof(int));      /* dwarf flag		*/
	eeprom_update_block(&dseen[0],   &_saved_game.dseen[0], sizeof(int) * DWARFMAX); /* dwarf seen flag	*/
	eeprom_update_block(&odloc[0],   &_saved_game.odloc[0], sizeof(int) * DWARFMAX); /* dwarf old locations	*/
	eeprom_update_block(&daltloc,    &_saved_game.daltloc, sizeof(int));      /* alternate appearance	*/
	eeprom_update_block(&dkill,      &_saved_game.dkill, sizeof(int));      /* dwarves killed	*/
	eeprom_update_block(&chloc,      &_saved_game.chloc, sizeof(int));
	eeprom_update_block(&chloc2,     &_saved_game.chloc2, sizeof(int));      /* chest locations	*/
	eeprom_update_block(&bonus,      &_saved_game.bonus, sizeof(int));      /* to pass to end	*/
	eeprom_update_block(&numdie,     &_saved_game.numdie, sizeof(int));      /* number of deaths	*/
	eeprom_update_block(&object1,    &_saved_game.object1, sizeof(int));      /* to help intrans.	*/
	eeprom_update_block(&gaveup,     &_saved_game.gaveup, sizeof(int));      /* 1 if he quit early	*/
	eeprom_update_block(&foobar,     &_saved_game.foobar, sizeof(int));      /* fie fie foe foo...	*/

    eeprom_update_word(&_saved_game.initialized, EEPROM_INIT_MAGIC);

	printf_P(PSTR("Game saved -- see you later!\n"));
}

/*
	restore saved game handler
*/
void restore(void)
{
    if(eeprom_read_word(&_saved_game.initialized) != EEPROM_INIT_MAGIC) {
		printf_P(PSTR("Sorry, cannot find any saved game to load.\n"));
		return;
	}

    eeprom_read_block(&turns,      &_saved_game.turns, sizeof(int));
    eeprom_read_block(&loc,        &_saved_game.loc, sizeof(int));
    eeprom_read_block(&oldloc,     &_saved_game.oldloc, sizeof(int));
    eeprom_read_block(&oldloc2,    &_saved_game.oldloc2, sizeof(int));
    eeprom_read_block(&newloc,     &_saved_game.newloc, sizeof(int));      /* location variables */
    eeprom_read_block(&cond[0],    &_saved_game.cond[0], sizeof(int) * MAXLOC); /* location status	*/
    eeprom_read_block(&place[0],   &_saved_game.place[0], sizeof(int) * MAXOBJ); /* object location	*/
    eeprom_read_block(&fixed[0],   &_saved_game.fixed[0], sizeof(int) * MAXOBJ); /* second object loc	*/
    eeprom_read_block(&visited[0], &_saved_game.visited[0], sizeof(int) * MAXLOC); /* >0 if has been here	*/
    eeprom_read_block(&prop[0],    &_saved_game.prop[0], sizeof(int) * MAXOBJ); /* status of object	*/
    eeprom_read_block(&tally,      &_saved_game.tally, sizeof(int));
    eeprom_read_block(&tally2,     &_saved_game.tally2, sizeof(int));      /* item counts		*/
    eeprom_read_block(&limit,      &_saved_game.limit, sizeof(int));      /* time limit		*/
    eeprom_read_block(&lmwarn,     &_saved_game.lmwarn, sizeof(int));      /* lamp warning flag	*/
    eeprom_read_block(&wzdark,     &_saved_game.wzdark, sizeof(int));
    eeprom_read_block(&closing,    &_saved_game.closing, sizeof(int));
    eeprom_read_block(&closed,     &_saved_game.closed, sizeof(int));      /* game state flags	*/
    eeprom_read_block(&holding,    &_saved_game.holding, sizeof(int));      /* count of held items	*/
    eeprom_read_block(&detail,     &_saved_game.detail, sizeof(int));      /* LOOK count		*/
    eeprom_read_block(&knfloc,     &_saved_game.knfloc, sizeof(int));      /* knife location	*/
    eeprom_read_block(&clock1,     &_saved_game.clock1, sizeof(int));
    eeprom_read_block(&clock2,     &_saved_game.clock2, sizeof(int));
    eeprom_read_block(&panic,      &_saved_game.panic, sizeof(int));      /* timing variables	*/
    eeprom_read_block(&dloc[0],    &_saved_game.dloc[0], sizeof(int) * DWARFMAX);  /* dwarf locations	*/
    eeprom_read_block(&dflag,      &_saved_game.dflag, sizeof(int));      /* dwarf flag		*/
    eeprom_read_block(&dseen[0],   &_saved_game.dseen[0], sizeof(int) * DWARFMAX); /* dwarf seen flag	*/
    eeprom_read_block(&odloc[0],   &_saved_game.odloc[0], sizeof(int) * DWARFMAX); /* dwarf old locations	*/
    eeprom_read_block(&daltloc,    &_saved_game.daltloc, sizeof(int));      /* alternate appearance	*/
    eeprom_read_block(&dkill,      &_saved_game.dkill, sizeof(int));      /* dwarves killed	*/
    eeprom_read_block(&chloc,      &_saved_game.chloc, sizeof(int));
    eeprom_read_block(&chloc2,     &_saved_game.chloc2, sizeof(int));      /* chest locations	*/
    eeprom_read_block(&bonus,      &_saved_game.bonus, sizeof(int));      /* to pass to end	*/
    eeprom_read_block(&numdie,     &_saved_game.numdie, sizeof(int));      /* number of deaths	*/
    eeprom_read_block(&object1,    &_saved_game.object1, sizeof(int));      /* to help intrans.	*/
    eeprom_read_block(&gaveup,     &_saved_game.gaveup, sizeof(int));      /* 1 if he quit early	*/
    eeprom_read_block(&foobar,     &_saved_game.foobar, sizeof(int));      /* fie fie foe foo...	*/

	printf("Game restored.\n");
	describe();
}
