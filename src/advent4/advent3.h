#include <avr/pgmspace.h>

static PROGMEM const char _adventtxt3_str1[] =
    "/Set of keys.\n"
    "/There are some keys on the ground here.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str2[] =
    "/Brass lantern\n"
    "/There is a shiny brass lamp nearby.\n"
    "/There is a lamp shining nearby.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str3[] =
    "/*Grate\n"
    "/The grate is locked.\n"
    "/The grate is open.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str4[] =
    "/Wicker cage\n"
    "/There is a small wicker cage discarded nearby.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str5[] =
    "/Black rod\n"
    "/A three foot black rod with a rusty star on an end lies nearby.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str6[] =
    "/Black rod\n"
    "/A three foot black rod with a rusty mark on an end lies nearby.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str7[] =
    "/*Steps\n"
    "/Rough stone steps lead down the pit.\n"
    "/Rough stone steps lead up the dome.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str8[] =
    "/Little bird in cage\n"
    "/A cheerful little bird is sitting here singing.\n"
    "/There is a little bird in the cage.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str9[] =
    "/*Rusty door\n"
    "/The way north is barred by a massive, rusty, iron door.\n"
    "/The way north leads through a massive, rusty, iron door.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str10[] =
    "/Velvet pillow\n"
    "/A small velvet pillow lies on the floor.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str11[] =
    "/*Snake\n"
    "/A huge green fierce snake bars the way!\n"
    "//\n";

static PROGMEM const char _adventtxt3_str12[] =
    "/*Fissure\n"
    "//A crystal bridge now spans the fissure.\n"
    "/The crystal bridge has vanished!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str13[] =
    "/*Stone tablet\n"
    "/A massive stone tablet imbedded in the wall reads:\n"
    "\"Congratulations on bringing light into the dark-room!\"\n"
    "/\n";

static PROGMEM const char _adventtxt3_str14[] =
    "/Giant clam >Grunt!<\n"
    "/There is an enormous clam here with its shell tightly closed.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str15[] =
    "/Giant oyster >Groan!<\n"
    "/There is an enormous oyster here with its shell tightly closed.\n"
    "/Interesting.  There seems to be something written on the\n"
    "underside of the oyster.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str16[] =
    "/\"Spelunker Today\"\n"
    "/There are a few recent issues of \"Spelunker Today\" magazine\n"
    "here.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str19[] =
    "/Tasty food\n"
    "/There is tasty food here.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str20[] =
    "/Small bottle\n"
    "/There is a bottle of water here.\n"
    "/There is an empty bottle here.\n"
    "/There is a bottle of oil here.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str21[] =
    "/Water in the bottle.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str22[] =
    "/Oil in the bottle\n"
    "/\n";

static PROGMEM const char _adventtxt3_str23[] =
    "/*Mirror\n"
    "//\n";

static PROGMEM const char _adventtxt3_str24[] =
    "/*Plant\n"
    "/There is a tiny little plant in the pit, murmuring\n"
    "\"Water, Water, ...\"\n"
    "/The plant spurts into furious growth for a few seconds.\n"
    "/There is a 12-foot-tall beanstalk stretching up out of\n"
    "the pit, bellowing \"Water!! Water!!\"\n"
    "/The plant grows explosively, almost filling the bottom\n"
    "of the pit. \n"
    "/There is a gigantic beanstalk stretching all the way\n"
    "up to the hole.\n"
    "/You've over-watered the plant!  It's shriveling up!\n"
    "It's, It's...\n"
    "/\n";

static PROGMEM const char _adventtxt3_str25[] =
    "/*Phony plant\n"
    "/\n"
    "/The top of a 12-foot-tall beanstalk is poking up out of\n"
    "the west pit.\n"
    "/There is a huge beanstalk growing out of the west pit up to\n"
    "the hole.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str26[] =
    "/*Stalactite\n"
    "//\n";

static PROGMEM const char _adventtxt3_str27[] =
    "/*Shadowy figure\n"
    "/The shadowy figure seems to be trying to attract your attention.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str28[] =
    "/Dwarf's axe\n"
    "/There is a little axe here.\n"
    "/There is a little axe lying beside the bear.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str29[] =
    "/*Cave drawings\n"
    "//\n";

static PROGMEM const char _adventtxt3_str30[] =
    "/*Pirate\n"
    "//\n";

static PROGMEM const char _adventtxt3_str31[] =
    "/*Dragon\n"
    "/A huge green fierce dragon bars the way!\n"
    "/Congratulations!  You have just vanquished a dragon with\n"
    "your bare hands!  (Unbelievable, Isn't it?)\n"
    "/The body of a huge green dead dragon is lying off to one\n"
    "side.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str32[] =
    "/*Chasm\n"
    "/A rickety wooden bridge extends across the chasm, vanishing\n"
    "into the mist.  A sign posted on the bridge reads:\n"
    "          \"Stop!  Pay Troll!\"\n"
    "/The wreckage of a bridge (and a dead bear) can be seen\n"
    "at the bottom of the chasm.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str33[] =
    "/*Troll\n"
    "/A burly troll stands by the bridge and insists you throw\n"
    "him a treasure before you may cross.\n"
    "/The troll steps out from beneath the bridge and blocks\n"
    "your way.\n"
    "//\n";

static PROGMEM const char _adventtxt3_str34[] =
    "/*Phony troll\n"
    "/The troll is nowhere to be seen.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str35[] =
    "//There is a ferocious cave bear eyeing you from the far\n"
    "end of the room!\n"
    "/There is a gentle cave bear sitting placidly in one corner.\n"
    "/There is a contented-looking bear wandering about nearby.\n"
    "//\n";

static PROGMEM const char _adventtxt3_str36[] =
    "/*Message in second maze\n"
    "/There is a message scrawled in the dust in a flowery script,\n"
    "reading:\n"
    "           \"This is not the maze where the\"\n"
    "           \"pirate leaves his treasure chest\"\n"
    "/\n";

static PROGMEM const char _adventtxt3_str37[] =
    "/*Volcano and,or Geyser\n"
    "//\n";

static PROGMEM const char _adventtxt3_str38[] =
    "/*Vending machine\n"
    "/There is a massive vending machine here.  The instructions\n"
    "on it read:\n"
    "     \"Drop coins here to receive fresh batteries.\"\n"
    "/\n";

static PROGMEM const char _adventtxt3_str39[] =
    "/Batteries\n"
    "/There are fresh batteries here.\n"
    "/Some worn-out batteries have been discarded nearby.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str40[] =
    "/*Carpet and,or moss\n"
    "//\n";

static PROGMEM const char _adventtxt3_str50[] =
    "/Large gold nugget\n"
    "/There is a large sparkling nugget of gold here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str51[] =
    "/Several diamonds\n"
    "/There are diamonds here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str52[] =
    "/Bars of silver\n"
    "/There are bars of silver here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str53[] =
    "/Precious jewelry\n"
    "/There is precious jewelry here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str54[] =
    "/Rare coins\n"
    "/There are many coins here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str55[] =
    "/Treasure chest\n"
    "/The pirate's treasure chest is here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str56[] =
    "/Golden eggs\n"
    "/There is a large nest here, full of golden eggs!\n"
    "/The nest of golden eggs has vanished!\n"
    "/Done!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str57[] =
    "/Jeweled trident\n"
    "/There is a jewel-encrusted trident here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str58[] =
    "/Ming vase\n"
    "/There is a delicate, precious, ming vase here!\n"
    "/The vase is now resting, delicately, on a velvet pillow.\n"
    "/The floor is littered with worthless shards of pottery.\n"
    "/The ming vase drops with a delicate crash.\n"
    "/\n";

static PROGMEM const char _adventtxt3_str59[] =
    "/Egg-sized emerald\n"
    "/There is an emerald here the size of a plover's egg!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str60[] =
    "/Platinum pyramid\n"
    "/There is a platinum pyramid here, 8 inches on a side!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str61[] =
    "/Glistening pearl\n"
    "/Off to one side lies a glistening pearl!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str62[] =
    "/Persian rug\n"
    "/There is a persian rug spread out on the floor!\n"
    "/The dragon is sprawled out on a persian rug!!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str63[] =
    "/Rare spices\n"
    "/There are rare spices here!\n"
    "/\n";

static PROGMEM const char _adventtxt3_str64[] =
    "/Golden chain\n"
    "/There is a golden chain lying in a heap on the floor!\n"
    "/The bear is locked to the wall with a golden chain!\n"
    "/There is a golden chain locked to the wall!\n"
    "/\n";

const PROGMEM char * const PROGMEM adventtxt3[64] = {
    _adventtxt3_str1,
    _adventtxt3_str2,
    _adventtxt3_str3,
    _adventtxt3_str4,
    _adventtxt3_str5,
    _adventtxt3_str6,
    _adventtxt3_str7,
    _adventtxt3_str8,
    _adventtxt3_str9,
    _adventtxt3_str10,
    _adventtxt3_str11,
    _adventtxt3_str12,
    _adventtxt3_str13,
    _adventtxt3_str14,
    _adventtxt3_str15,
    _adventtxt3_str16,
    NULL,
    NULL,
    _adventtxt3_str19,
    _adventtxt3_str20,
    _adventtxt3_str21,
    _adventtxt3_str22,
    _adventtxt3_str23,
    _adventtxt3_str24,
    _adventtxt3_str25,
    _adventtxt3_str26,
    _adventtxt3_str27,
    _adventtxt3_str28,
    _adventtxt3_str29,
    _adventtxt3_str30,
    _adventtxt3_str31,
    _adventtxt3_str32,
    _adventtxt3_str33,
    _adventtxt3_str34,
    _adventtxt3_str35,
    _adventtxt3_str36,
    _adventtxt3_str37,
    _adventtxt3_str38,
    _adventtxt3_str39,
    _adventtxt3_str40,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    _adventtxt3_str50,
    _adventtxt3_str51,
    _adventtxt3_str52,
    _adventtxt3_str53,
    _adventtxt3_str54,
    _adventtxt3_str55,
    _adventtxt3_str56,
    _adventtxt3_str57,
    _adventtxt3_str58,
    _adventtxt3_str59,
    _adventtxt3_str60,
    _adventtxt3_str61,
    _adventtxt3_str62,
    _adventtxt3_str63,
    _adventtxt3_str64,
};
