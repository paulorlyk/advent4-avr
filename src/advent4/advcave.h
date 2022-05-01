
/*	header ADVCAVE.H					*/

/*	WARNING: the travel array for the cave is stored as MAXLOC
		 strings.  the strings are an array of 1..MAXTRAV
		 LONG INTEGERS.  this requires 32 bit LONG INTEGERS.
		 these values are used in database.c "gettrav".
		 tdset*1000000 + tverb*1000 + tcond = value stored
*/

#include <avr/pgmspace.h>

static PROGMEM const long int _advcave_loc1[] = { 2002000,2044000,2029000,3003000,3012000,3019000,3043000,4005000,4013000,4014000,4046000,4030000,5006000,5045000,5043000,8063000, 0};
static PROGMEM const long int _advcave_loc2[] = { 1002000,1012000,1007000,1043000,1045000,1030000,5006000,5045000,5046000, 0};
static PROGMEM const long int _advcave_loc3[] = { 1003000,1011000,1032000,1044000,11062000,33065000,79005000,79014000, 0};
static PROGMEM const long int _advcave_loc4[] = { 1004000,1012000,1045000,5006000,5043000,5044000,5029000,7005000,7046000,7030000,8063000, 0};
static PROGMEM const long int _advcave_loc5[] = { 4009000,4043000,4030000,5006050,5007050,5045050,6006000,5044000,5046000, 0};
static PROGMEM const long int _advcave_loc6[] = { 1002000,1045000,4009000,4043000,4044000,4030000,5006000,5046000, 0};
static PROGMEM const long int _advcave_loc7[] = { 1012000,4004000,4045000,5006000,5043000,5044000,8005000,8015000,8016000,8046000,595060000,595014000,595030000, 0};
static PROGMEM const long int _advcave_loc8[] = { 5006000,5043000,5046000,5044000,1012000,7004000,7013000,7045000,9003303,9019303,9030303,593003000, 0};
static PROGMEM const long int _advcave_loc9[] = { 8011303,8029303,593011000,10017000,10018000,10019000,10044000,14031000,11051000, 0};
static PROGMEM const long int _advcave_loc10[] = { 9011000,9020000,9021000,9043000,11019000,11022000,11044000,11051000,14031000, 0};
static PROGMEM const long int _advcave_loc11[] = { 8063303,9064000,10017000,10018000,10023000,10024000,10043000,12025000,12019000,12029000,12044000,3062000,14031000, 0};
static PROGMEM const long int _advcave_loc12[] = { 8063303,9064000,11030000,11043000,11051000,13019000,13029000,13044000,14031000, 0};
static PROGMEM const long int _advcave_loc13[] = { 8063303,9064000,11051000,12025000,12043000,14023000,14031000,14044000, 0};
static PROGMEM const long int _advcave_loc14[] = { 8063303,9064000,11051000,13023000,13043000,20030150,20031150,20034150,15030000,16033000,16044000, 0};
static PROGMEM const long int _advcave_loc15[] = { 18036000,18046000,17007000,17038000,17044000,19010000,19030000,19045000,22029150,22031150,22034150,22035150,22023150,22043150,14029000,34055000, 0};
static PROGMEM const long int _advcave_loc16[] = { 14001000, 0};
static PROGMEM const long int _advcave_loc17[] = { 15038000,15043000,596039312,21007412,597041412,597042412,597044412,597069412,27041000, 0};
static PROGMEM const long int _advcave_loc18[] = { 15038000,15011000,15045000, 0};
static PROGMEM const long int _advcave_loc19[] = { 15010000,15029000,15043000,28045311,28036311,29046311,29037311,30044311,30007311,32045000,74049035,32049211,74066000, 0};
static PROGMEM const long int _advcave_loc20[] = { 001000, 0};
static PROGMEM const long int _advcave_loc21[] = { 001000, 0};
static PROGMEM const long int _advcave_loc22[] = { 15001000, 0};
static PROGMEM const long int _advcave_loc23[] = { 67043000,67042000,68044000,68061000,25030000,25031000,648052000, 0};
static PROGMEM const long int _advcave_loc24[] = { 67029000,67011000, 0};
static PROGMEM const long int _advcave_loc25[] = { 23029000,23011000,31056724,26056000, 0};
static PROGMEM const long int _advcave_loc26[] = { 88001000, 0};
static PROGMEM const long int _advcave_loc27[] = { 596039312,21007412,597041412,597042412,597043412,597069412,17041000,40045000,41044000, 0};
static PROGMEM const long int _advcave_loc28[] = { 19038000,19011000,19046000,33045000,33055000,36030000,36052000, 0};
static PROGMEM const long int _advcave_loc29[] = { 19038000,19011000,19045000, 0};
static PROGMEM const long int _advcave_loc30[] = { 19038000,19011000,19043000,62044000,62029000, 0};
static PROGMEM const long int _advcave_loc31[] = { 89001524,90001000, 0};
static PROGMEM const long int _advcave_loc32[] = { 19001000, 0};
static PROGMEM const long int _advcave_loc33[] = { 3065000,28046000,34043000,34053000,34054000,35044000,302071159,100071000, 0};
static PROGMEM const long int _advcave_loc34[] = { 33030000,33055000,15029000, 0};
static PROGMEM const long int _advcave_loc35[] = { 33043000,33055000,20039000, 0};
static PROGMEM const long int _advcave_loc36[] = { 37043000,37017000,28029000,28052000,39044000,65070000, 0};
static PROGMEM const long int _advcave_loc37[] = { 36044000,36017000,38030000,38031000,38056000, 0};
static PROGMEM const long int _advcave_loc38[] = { 37056000,37029000,37011000,595060000,595014000,595030000,595004000,595005000, 0};
static PROGMEM const long int _advcave_loc39[] = { 36043000,36023000,64030000,64052000,64058000,65070000, 0};
static PROGMEM const long int _advcave_loc40[] = { 41001000, 0};
static PROGMEM const long int _advcave_loc41[] = { 42046000,42029000,42023000,42056000,27043000,59045000,60044000,60017000, 0};
static PROGMEM const long int _advcave_loc42[] = { 41029000,42045000,43043000,45046000,80044000, 0};
static PROGMEM const long int _advcave_loc43[] = { 42044000,44046000,45043000, 0};
static PROGMEM const long int _advcave_loc44[] = { 43043000,48030000,50046000,82045000, 0};
static PROGMEM const long int _advcave_loc45[] = { 42044000,43045000,46043000,47046000,87029000,87030000, 0};
static PROGMEM const long int _advcave_loc46[] = { 45044000,45011000, 0};
static PROGMEM const long int _advcave_loc47[] = { 45043000,45011000, 0};
static PROGMEM const long int _advcave_loc48[] = { 44029000,44011000, 0};
static PROGMEM const long int _advcave_loc49[] = { 50043000,51044000, 0};
static PROGMEM const long int _advcave_loc50[] = { 44043000,49044000,51030000,52046000, 0};
static PROGMEM const long int _advcave_loc51[] = { 49044000,50029000,52043000,53046000, 0};
static PROGMEM const long int _advcave_loc52[] = { 50044000,51043000,52046000,53029000,55045000,86030000, 0};
static PROGMEM const long int _advcave_loc53[] = { 51044000,52045000,54046000, 0};
static PROGMEM const long int _advcave_loc54[] = { 53044000,53011000, 0};
static PROGMEM const long int _advcave_loc55[] = { 52044000,55045000,56030000,57043000, 0};
static PROGMEM const long int _advcave_loc56[] = { 55029000,55011000, 0};
static PROGMEM const long int _advcave_loc57[] = { 13030000,13056000,55044000,58046000,83045000,84043000, 0};
static PROGMEM const long int _advcave_loc58[] = { 57043000,57011000, 0};
static PROGMEM const long int _advcave_loc59[] = { 27001000, 0};
static PROGMEM const long int _advcave_loc60[] = { 41043000,41029000,41017000,61044000,62045000,62030000,62052000, 0};
static PROGMEM const long int _advcave_loc61[] = { 60043000,62045000,107046100, 0};
static PROGMEM const long int _advcave_loc62[] = { 60044000,63045000,30043000,61046000, 0};
static PROGMEM const long int _advcave_loc63[] = { 62046000,62011000, 0};
static PROGMEM const long int _advcave_loc64[] = { 39029000,39056000,39059000,65044000,65070000,103045000,103074000,106043000, 0};
static PROGMEM const long int _advcave_loc65[] = { 64043000,66044000,556046080,68061000,556029080,70029050,39029000,556045060,72045075,71045000,556030080,106030000, 0};
static PROGMEM const long int _advcave_loc66[] = { 65047000,67044000,556046080,77025000,96043000,556050050,97072000, 0};
static PROGMEM const long int _advcave_loc67[] = { 66043000,23044000,23042000,24030000,24031000, 0};
static PROGMEM const long int _advcave_loc68[] = { 23046000,69029000,69056000,65045000, 0};
static PROGMEM const long int _advcave_loc69[] = { 68030000,68061000,120046331,119046000,109045000,113075000, 0};
static PROGMEM const long int _advcave_loc70[] = { 71045000,65030000,65023000,111046000, 0};
static PROGMEM const long int _advcave_loc71[] = { 65048000,70046000,110045000, 0};
static PROGMEM const long int _advcave_loc72[] = { 65070000,118049000,73045000,97048000,97072000, 0};
static PROGMEM const long int _advcave_loc73[] = { 72046000,72017000,72011000, 0};
static PROGMEM const long int _advcave_loc74[] = { 19043000,120044331,121044000,75030000, 0};
static PROGMEM const long int _advcave_loc75[] = { 76046000,77045000, 0};
static PROGMEM const long int _advcave_loc76[] = { 75045000, 0};
static PROGMEM const long int _advcave_loc77[] = { 75043000,78044000,66045000,66017000, 0};
static PROGMEM const long int _advcave_loc78[] = { 77046000, 0};
static PROGMEM const long int _advcave_loc79[] = { 3001000, 0};
static PROGMEM const long int _advcave_loc80[] = { 42045000,80044000,80046000,81043000, 0};
static PROGMEM const long int _advcave_loc81[] = { 80044000,80011000, 0};
static PROGMEM const long int _advcave_loc82[] = { 44046000,44011000, 0};
static PROGMEM const long int _advcave_loc83[] = { 57046000,84043000,85044000, 0};
static PROGMEM const long int _advcave_loc84[] = { 57045000,83044000,114050000, 0};
static PROGMEM const long int _advcave_loc85[] = { 83043000,83011000, 0};
static PROGMEM const long int _advcave_loc86[] = { 52029000,52011000, 0};
static PROGMEM const long int _advcave_loc87[] = { 45029000,45030000, 0};
static PROGMEM const long int _advcave_loc88[] = { 25030000,25056000,25043000,20039000,92044000,92027000, 0};
static PROGMEM const long int _advcave_loc89[] = { 25001000, 0};
static PROGMEM const long int _advcave_loc90[] = { 23001000, 0};
static PROGMEM const long int _advcave_loc91[] = { 95045000,95073000,95023000,72030000,72056000, 0};
static PROGMEM const long int _advcave_loc92[] = { 88046000,93043000,94045000, 0};
static PROGMEM const long int _advcave_loc93[] = { 92046000,92027000,92011000, 0};
static PROGMEM const long int _advcave_loc94[] = { 92046000,92027000,92023000,95045309,95003309,95073309,611045000, 0};
static PROGMEM const long int _advcave_loc95[] = { 94046000,94011000,92027000,91044000, 0};
static PROGMEM const long int _advcave_loc96[] = { 66044000,66011000, 0};
static PROGMEM const long int _advcave_loc97[] = { 66048000,72044000,72017000,98029000,98045000,98073000, 0};
static PROGMEM const long int _advcave_loc98[] = { 97046000,97072000,99044000, 0};
static PROGMEM const long int _advcave_loc99[] = { 98050000,98073000,301043000,301023000,100043000, 0};
static PROGMEM const long int _advcave_loc100[] = { 301044000,301023000,301011000,99044000,302071159,33071000,101047000,101022000, 0};
static PROGMEM const long int _advcave_loc101[] = { 100046000,100071000,100011000, 0};
static PROGMEM const long int _advcave_loc102[] = { 103030000,103074000,103011000, 0};
static PROGMEM const long int _advcave_loc103[] = { 102029000,102038000,104030000,618046114,619046115,64046000, 0};
static PROGMEM const long int _advcave_loc104[] = { 103029000,103074000,105030000, 0};
static PROGMEM const long int _advcave_loc105[] = { 104029000,104011000,103074000, 0};
static PROGMEM const long int _advcave_loc106[] = { 64029000,65044000,108043000, 0};
static PROGMEM const long int _advcave_loc107[] = { 131046000,132049000,133047000,134048000,135029000,136050000,137043000,138044000,139045000,61030000, 0};
static PROGMEM const long int _advcave_loc108[] = { 556043095,556045095,556046095,556047095,556048095,556049095,556050095,556029095,556030095,106043000,626044000, 0};
static PROGMEM const long int _advcave_loc109[] = { 69046000,113045000,113075000, 0};
static PROGMEM const long int _advcave_loc110[] = { 71044000,20039000, 0};
static PROGMEM const long int _advcave_loc111[] = { 70045000,50030040,50039040,50056040,53030050,45030000, 0};
static PROGMEM const long int _advcave_loc112[] = { 131049000,132045000,133043000,134050000,135048000,136047000,137044000,138030000,139029000,140046000, 0};
static PROGMEM const long int _advcave_loc113[] = { 109046000,109011000,109109000, 0};
static PROGMEM const long int _advcave_loc114[] = { 84048000, 0};
static PROGMEM const long int _advcave_loc115[] = { 116049000, 0};
static PROGMEM const long int _advcave_loc116[] = { 115047000,593030000, 0};
static PROGMEM const long int _advcave_loc117[] = { 118049000,660041233,660042233,660069233,660047233,661041332,303041000,21039332,596039000, 0};
static PROGMEM const long int _advcave_loc118[] = { 72030000,117029000, 0};
static PROGMEM const long int _advcave_loc119[] = { 69045000,69011000,653043000,65307000, 0};
static PROGMEM const long int _advcave_loc120[] = { 69045000,74043000, 0};
static PROGMEM const long int _advcave_loc121[] = { 74043000,74011000,653045000,653007000, 0};
static PROGMEM const long int _advcave_loc122[] = { 123047000,660041233,660042233,660069233,660049233,303041000,596039000,124077000,126028000,129040000, 0};
static PROGMEM const long int _advcave_loc123[] = { 122044000,124043000,124077000,126028000,129040000, 0};
static PROGMEM const long int _advcave_loc124[] = { 123044000,125047000,125036000,128048000,128037000,128030000,126028000,129040000, 0};
static PROGMEM const long int _advcave_loc125[] = { 124046000,124077000,126045000,126028000,127043000,127017000, 0};
static PROGMEM const long int _advcave_loc126[] = { 125046000,125023000,125011000,124077000,610030000,610039000, 0};
static PROGMEM const long int _advcave_loc127[] = { 125044000,125011000,125017000,124077000,126028000, 0};
static PROGMEM const long int _advcave_loc128[] = { 124045000,124029000,124077000,129046000,129030000,129040000,126028000, 0};
static PROGMEM const long int _advcave_loc129[] = { 128044000,128029000,124077000,130043000,130019000,130040000,130003000,126028000, 0};
static PROGMEM const long int _advcave_loc130[] = { 129044000,124077000,126028000, 0};
static PROGMEM const long int _advcave_loc131[] = { 107044000,132048000,133050000,134049000,135047000,136029000,137030000,138045000,139046000,112043000, 0};
static PROGMEM const long int _advcave_loc132[] = { 107050000,131029000,133045000,134046000,135044000,136049000,137047000,138043000,139030000,112048000, 0};
static PROGMEM const long int _advcave_loc133[] = { 107029000,131030000,132044000,134047000,135049000,136043000,137045000,138050000,139048000,112046000, 0};
static PROGMEM const long int _advcave_loc134[] = { 107047000,131045000,132050000,133048000,135043000,136030000,137046000,138029000,139044000,112049000, 0};
static PROGMEM const long int _advcave_loc135[] = { 107045000,131048000,132030000,133046000,134043000,136044000,137049000,138047000,139050000,112029000, 0};
static PROGMEM const long int _advcave_loc136[] = { 107043000,131044000,132029000,133049000,134030000,135046000,137050000,138048000,139047000,112045000, 0};
static PROGMEM const long int _advcave_loc137[] = { 107048000,131047000,132046000,133030000,134029000,135050000,136045000,138049000,139043000,112044000, 0};
static PROGMEM const long int _advcave_loc138[] = { 107030000,131043000,132047000,133029000,134044000,135045000,136046000,137048000,139049000,112050000, 0};
static PROGMEM const long int _advcave_loc139[] = { 107049000,131050000,132043000,133044000,134045000,135030000,136048000,137029000,138046000,112047000, 0};
static PROGMEM const long int _advcave_loc140[] = { 112045000,112011000, 0};

const PROGMEM long int * const cave[] = {
    _advcave_loc1,
    _advcave_loc2,
    _advcave_loc3,
    _advcave_loc4,
    _advcave_loc5,
    _advcave_loc6,
    _advcave_loc7,
    _advcave_loc8,
    _advcave_loc9,
    _advcave_loc10,
    _advcave_loc11,
    _advcave_loc12,
    _advcave_loc13,
    _advcave_loc14,
    _advcave_loc15,
    _advcave_loc16,
    _advcave_loc17,
    _advcave_loc18,
    _advcave_loc19,
    _advcave_loc20,
    _advcave_loc21,
    _advcave_loc22,
    _advcave_loc23,
    _advcave_loc24,
    _advcave_loc25,
    _advcave_loc26,
    _advcave_loc27,
    _advcave_loc28,
    _advcave_loc29,
    _advcave_loc30,
    _advcave_loc31,
    _advcave_loc32,
    _advcave_loc33,
    _advcave_loc34,
    _advcave_loc35,
    _advcave_loc36,
    _advcave_loc37,
    _advcave_loc38,
    _advcave_loc39,
    _advcave_loc40,
    _advcave_loc41,
    _advcave_loc42,
    _advcave_loc43,
    _advcave_loc44,
    _advcave_loc45,
    _advcave_loc46,
    _advcave_loc47,
    _advcave_loc48,
    _advcave_loc49,
    _advcave_loc50,
    _advcave_loc51,
    _advcave_loc52,
    _advcave_loc53,
    _advcave_loc54,
    _advcave_loc55,
    _advcave_loc56,
    _advcave_loc57,
    _advcave_loc58,
    _advcave_loc59,
    _advcave_loc60,
    _advcave_loc61,
    _advcave_loc62,
    _advcave_loc63,
    _advcave_loc64,
    _advcave_loc65,
    _advcave_loc66,
    _advcave_loc67,
    _advcave_loc68,
    _advcave_loc69,
    _advcave_loc70,
    _advcave_loc71,
    _advcave_loc72,
    _advcave_loc73,
    _advcave_loc74,
    _advcave_loc75,
    _advcave_loc76,
    _advcave_loc77,
    _advcave_loc78,
    _advcave_loc79,
    _advcave_loc80,
    _advcave_loc81,
    _advcave_loc82,
    _advcave_loc83,
    _advcave_loc84,
    _advcave_loc85,
    _advcave_loc86,
    _advcave_loc87,
    _advcave_loc88,
    _advcave_loc89,
    _advcave_loc90,
    _advcave_loc91,
    _advcave_loc92,
    _advcave_loc93,
    _advcave_loc94,
    _advcave_loc95,
    _advcave_loc96,
    _advcave_loc97,
    _advcave_loc98,
    _advcave_loc99,
    _advcave_loc100,
    _advcave_loc101,
    _advcave_loc102,
    _advcave_loc103,
    _advcave_loc104,
    _advcave_loc105,
    _advcave_loc106,
    _advcave_loc107,
    _advcave_loc108,
    _advcave_loc109,
    _advcave_loc110,
    _advcave_loc111,
    _advcave_loc112,
    _advcave_loc113,
    _advcave_loc114,
    _advcave_loc115,
    _advcave_loc116,
    _advcave_loc117,
    _advcave_loc118,
    _advcave_loc119,
    _advcave_loc120,
    _advcave_loc121,
    _advcave_loc122,
    _advcave_loc123,
    _advcave_loc124,
    _advcave_loc125,
    _advcave_loc126,
    _advcave_loc127,
    _advcave_loc128,
    _advcave_loc129,
    _advcave_loc130,
    _advcave_loc131,
    _advcave_loc132,
    _advcave_loc133,
    _advcave_loc134,
    _advcave_loc135,
    _advcave_loc136,
    _advcave_loc137,
    _advcave_loc138,
    _advcave_loc139,
    _advcave_loc140,
};
