#include <avr/pgmspace.h>

static PROGMEM const char _adventtxt4_str1[] =
    "Somewhere nearby is Colossal Cave, where others have found fortunes in \n"
    "treasure and gold, though it is rumored that some who enter are never \n"
    "seen again.  Magic is said to work in the cave.  I will be your eyes \n"
    "and hands.  Direct me with commands of 1 or 2 words.  I should warn \n"
    "you that I look at only the first five letters of each word, so you'll \n"
    "have to enter \"Northeast\" as \"ne\" to distinguish it from \"North\".  \n"
    "(Should you get stuck, type \"help\" for some general hints).\n"
    "\n";

static PROGMEM const char _adventtxt4_str2[] =
    "A little dwarf with a big knife blocks your way.\n";

static PROGMEM const char _adventtxt4_str3[] =
    "A little dwarf just walked around a corner, saw you,\n"
    "threw a little axe at you which missed, cursed, and ran away.\n";

static PROGMEM const char _adventtxt4_str4[] =
    "There is a threatening little dwarf in the room with you!\n";

static PROGMEM const char _adventtxt4_str5[] =
    "One sharp, nasty knife is thrown at you!\n";

static PROGMEM const char _adventtxt4_str6[] =
    "None of them hit you!\n";

static PROGMEM const char _adventtxt4_str7[] =
    "One of them gets you!\n";

static PROGMEM const char _adventtxt4_str8[] =
    "A hollow voice says \"Plugh\".\n";

static PROGMEM const char _adventtxt4_str9[] =
    "There is no way to go that direction.\n";

static PROGMEM const char _adventtxt4_str10[] =
    "I am unsure how you are facing.  Use compass points or\n"
    "nearby objects.\n";

static PROGMEM const char _adventtxt4_str11[] =
	"I don't know in from out here.  Use compass points or name\n"
	"something in the general direction you want to go.\n";

static PROGMEM const char _adventtxt4_str12[] =
	"I don't know how to apply that word here.\n";

static PROGMEM const char _adventtxt4_str13[] =
	"I don't understand that!\n";

static PROGMEM const char _adventtxt4_str14[] =
	"I'm game.  Would you care to explain how?\n";

static PROGMEM const char _adventtxt4_str15[] =
	"Sorry, but I am not allowed to give more detail.  I will\n"
	"repeat the long description of your location.\n";

static PROGMEM const char _adventtxt4_str16[] =
	"It is now pitch dark.  If you proceed you will likely fall\n"
	"into a pit.\n";

static PROGMEM const char _adventtxt4_str17[] =
	"If you prefer, simply type W rather than West.\n";

static PROGMEM const char _adventtxt4_str18[] =
	"Are you trying to catch the bird?\n";

static PROGMEM const char _adventtxt4_str19[] =
	"The bird is frightened right now and you cannot catch\n"
	"it no matter what you try.  Perhaps you might try later.\n";

static PROGMEM const char _adventtxt4_str20[] =
	"Are you trying to somehow deal with the snake?\n";

static PROGMEM const char _adventtxt4_str21[] =
	"You can't kill the snake, or drive it away, or avoid it,\n"
	"or anything like that.  There is a way to get by, but you\n"
	"don't have the necessary resources right now.\n";

static PROGMEM const char _adventtxt4_str22[] =
	"Do you really want to quit now?\n";

static PROGMEM const char _adventtxt4_str23[] =
	"You fell into a pit and broke every bone in your body!\n";

static PROGMEM const char _adventtxt4_str24[] =
	"You are already carrying it!\n";

static PROGMEM const char _adventtxt4_str25[] =
	"You can't be serious!\n";

static PROGMEM const char _adventtxt4_str26[] =
	"The bird was unafraid when you entered, but as you approach\n"
	"it becomes disturbed and you cannot catch it.\n";

static PROGMEM const char _adventtxt4_str27[] =
	"You can catch the bird, but you cannot carry it.\n";

static PROGMEM const char _adventtxt4_str28[] =
	"There is nothing here with a lock!\n";

static PROGMEM const char _adventtxt4_str29[] =
	"You aren't carrying it!\n";

static PROGMEM const char _adventtxt4_str30[] =
	"The little bird attacks the green snake, and in an\n"
	"astounding flurry drives the snake away.\n";

static PROGMEM const char _adventtxt4_str31[] =
	"You have no keys!\n";

static PROGMEM const char _adventtxt4_str32[] =
	"It has no lock.\n";

static PROGMEM const char _adventtxt4_str33[] =
	"I don't know how to lock or unlock such a thing.\n";

static PROGMEM const char _adventtxt4_str34[] =
	"It was already locked.\n";

static PROGMEM const char _adventtxt4_str35[] =
	"The grate is now locked.\n";

static PROGMEM const char _adventtxt4_str36[] =
	"The grate is now unlocked.\n";

static PROGMEM const char _adventtxt4_str37[] =
	"It was already unlocked.\n";

static PROGMEM const char _adventtxt4_str38[] =
	"You have no source of light.\n";

static PROGMEM const char _adventtxt4_str39[] =
	"Your lamp is now on.\n";

static PROGMEM const char _adventtxt4_str40[] =
	"Your lamp is now off.\n";

static PROGMEM const char _adventtxt4_str41[] =
	"There is no way to get past the bear to unlock the chain,_\n"
	"which is probably just as well.\n";

static PROGMEM const char _adventtxt4_str42[] =
	"Nothing happens.\n";

static PROGMEM const char _adventtxt4_str43[] =
	"Where?\n";

static PROGMEM const char _adventtxt4_str44[] =
	"There is nothing here to attack.\n";

static PROGMEM const char _adventtxt4_str45[] =
	"The little bird is now dead.  Its body disappears.\n";

static PROGMEM const char _adventtxt4_str46[] =
	"Attacking the snake both doesn't work and is very dangerous.\n";

static PROGMEM const char _adventtxt4_str47[] =
	"You killed a little dwarf.\n";

static PROGMEM const char _adventtxt4_str48[] =
	"You attack a little dwarf, but he dodges out of the way.\n";

static PROGMEM const char _adventtxt4_str49[] =
	"With what? Your bare hands?\n";

static PROGMEM const char _adventtxt4_str50[] =
	"Good try, but that is an old worn-out magic word.\n";

static PROGMEM const char _adventtxt4_str51[] =
    "I know of places, actions, and things.  Most of my vocabulary \n"
    "describes places and is used to move you there.  To move, try words \n"
    "like forest, building, downstream, enter, east, west, north, south, up \n"
    "or down.  \n"
    "I know about a few special objects, like a black rod hidden in the \n"
    "cave.  These objects can be manipulated using some of the action words \n"
    "I know. Usually you will need to give both the object and action words \n"
    "(In either order), but sometimes I can infer the object from the verb \n"
    "alone.  Some objects also imply verbs; in particular, \"inventory\" \n"
    "implies \"take inventory\", which causes me to give you a list of what \n"
    "you're carrying.\n"
    "The objects have side effects; for instance, the rod scares the bird. \n"
    "Usually people having trouble moving just need to try a few more \n"
    "words.  Usually people trying unsuccessfully to manipulate an object \n"
    "are attempting something beyond their (or my!) capabilities and should \n"
    "try a completely different tack.\n"
    "To speed the game up, you can sometimes move long distances with a \n"
    "single word.  For example, \"building\" usually gets you to the building \n"
    "from anywhere above ground except when lost in the forest.  Also, note \n"
    "that cave passages turn a lot, and that leaving a room to the north \n"
    "does not guarantee entering the next from the south. Good luck!\n";

static PROGMEM const char _adventtxt4_str52[] =
	"It misses!\n";

static PROGMEM const char _adventtxt4_str53[] =
	"It gets you!\n";

static PROGMEM const char _adventtxt4_str54[] =
	"OK\n";

static PROGMEM const char _adventtxt4_str55[] =
	"You can't unlock the keys.\n";

static PROGMEM const char _adventtxt4_str56[] =
	"You have crawled around in some little holes and wound up\n"
	"back in the main passage.\n";

static PROGMEM const char _adventtxt4_str57[] =
	"I don't know where the cave is, but hereabouts no stream\n"
	"can run on the surface for very long.  I would try the stream.\n";

static PROGMEM const char _adventtxt4_str58[] =
	"I need more detailed instructions to do that.\n";

static PROGMEM const char _adventtxt4_str59[] =
	"I can only tell you what you see as you move about and\n"
	"manipulate things.  I cannot tell you where remote things are.\n";

static PROGMEM const char _adventtxt4_str60[] =
	"I don't know that word.\n";

static PROGMEM const char _adventtxt4_str61[] =
	"What?\n";

static PROGMEM const char _adventtxt4_str62[] =
	"Are you trying to get into the cave?\n";

static PROGMEM const char _adventtxt4_str63[] =
	"The grate is very solid and has a hardened steel lock.  You\n"
	"cannot enter without a key, and there are no keys nearby.\n"
	"I would recommend looking elsewhere for the keys.\n";

static PROGMEM const char _adventtxt4_str64[] =
	"The trees of the forest are large hardwood oak and maple,\n"
	"with an occasional grove of pine or spruce.  There is quite\n"
	"a bit of undergrowth, largely birch and ash saplings plus\n"
	"nondescript bushes of various sorts.  This time of year \n"
	"visibility is quite restricted by all the leaves, but travel\n"
	"is quite easy if you detour around the spruce and berry\n"
	"bushes.\n";

static PROGMEM const char _adventtxt4_str65[] =
	"\n"
	"                              Welcome to \n"
	"\n"
	"                       Colossal Cave Adventure!\n"
	"\n"
	"\n"
	"               Original development by Willie Crowther.\n"
	"                  Major features added by Don Woods.\n"
	"                 Conversion to BDS C by J. R. Jaeger.\n"
	"                Unix standardization by Jerry D. Pohl.\n"
	"            Port to QNX 4 and bug fixes by James Lummel.\n"
	"\n"
	"Would you like instructions?\n"
	"\n";

static PROGMEM const char _adventtxt4_str66[] =
	"Digging without a shovel is quite impractical.  Even with a\n"
	"shovel progress is unlikely.\n";

static PROGMEM const char _adventtxt4_str67[] =
	"Blasting requires dynamite.\n";

static PROGMEM const char _adventtxt4_str68[] =
	"I'm as confused as you are.\n";

static PROGMEM const char _adventtxt4_str69[] =
	"Mist is a white vapor, usually water.  Seen from time to time\n"
	"in caverns.  It can be found anywhere but is frequently a\n"
	"sign of a deep pit leading down to water.\n";

static PROGMEM const char _adventtxt4_str70[] =
	"Your feet are now wet.\n";

static PROGMEM const char _adventtxt4_str71[] =
	"I think I just lost my appetite.\n";

static PROGMEM const char _adventtxt4_str72[] =
	"Thank you.  It was delicious!\n";

static PROGMEM const char _adventtxt4_str73[] =
	"You have taken a drink from the stream.  The water tastes\n"
	"strongly of minerals, but is not unpleasant.  It is extremely\n"
	"cold.\n";

static PROGMEM const char _adventtxt4_str74[] =
	"The bottle of water is now empty.\n";

static PROGMEM const char _adventtxt4_str75[] =
	"Rubbing the electric lamp is not particularly rewarding.\n"
	"Anyway, nothing exciting happens.\n";

static PROGMEM const char _adventtxt4_str76[] =
	"Peculiar.  Nothing unexpected happens.\n";

static PROGMEM const char _adventtxt4_str77[] =
	"Your bottle is empty and the ground is wet.\n";

static PROGMEM const char _adventtxt4_str78[] =
	"You can't pour that.\n";

static PROGMEM const char _adventtxt4_str79[] =
	"Watch it!\n";

static PROGMEM const char _adventtxt4_str80[] =
	"Which way?\n";

static PROGMEM const char _adventtxt4_str81[] =
	"Oh dear, you seem to have gotten yourself killed.  I might\n"
	"be able to help you out, but I've never really done this\n"
	"before.  Do you want me to try to reincarnate you?\n";

static PROGMEM const char _adventtxt4_str82[] =
	"All right.  But don't blame me if something goes wr......\n"
	"                    --- POOF !! ---\n"
	"You are engulfed in a cloud of orange smoke.  Coughing and\n"
	"gasping, you emerge from the smoke and find...\n";

static PROGMEM const char _adventtxt4_str83[] =
	"You clumsy oaf, you've done it again!  I don't know how long\n"
	"I can keep this up.  Do you want me to try reincarnating\n"
	"you again?\n";

static PROGMEM const char _adventtxt4_str84[] =
	"Okay, now where did I put my orange smoke? ... > POOF! <\n"
	"Everything disappears in a dense cloud of orange smoke.\n";

static PROGMEM const char _adventtxt4_str85[] =
	"Now you've really done it!  I'm out of orange smoke!  You\n"
	"don't expect me to do a decent reincarnation without any\n"
	"orange smoke, do you?\n";

static PROGMEM const char _adventtxt4_str86[] =
	"Okay, If you're so smart, do it yourself!  I'm leaving!\n";

static PROGMEM const char _adventtxt4_str87[] =
	"Reserved\n";

static PROGMEM const char _adventtxt4_str88[] =
	"Reserved\n";

static PROGMEM const char _adventtxt4_str89[] =
	"Reserved\n";

static PROGMEM const char _adventtxt4_str90[] =
	"Reserved\n";

static PROGMEM const char _adventtxt4_str91[] =
	"Sorry, but I no longer seem to remember how it was you\n"
	"got here.\n";

static PROGMEM const char _adventtxt4_str92[] =
	"You can't carry anything more.  You'll have to drop something\n"
	"first.\n";

static PROGMEM const char _adventtxt4_str93[] =
	"You can't go through a locked steel grate!\n";

static PROGMEM const char _adventtxt4_str94[] =
	"I believe what you want is right here with you.\n";

static PROGMEM const char _adventtxt4_str95[] =
	"You don't fit through a two-inch slit!\n";

static PROGMEM const char _adventtxt4_str96[] =
	"I respectfully suggest you go across the bridge instead\n"
	"of jumping.\n";

static PROGMEM const char _adventtxt4_str97[] =
	"There is no way across the fissure.\n";

static PROGMEM const char _adventtxt4_str98[] =
	"You're not carrying anything.\n";

static PROGMEM const char _adventtxt4_str99[] =
	"You are currently holding the following:\n";

static PROGMEM const char _adventtxt4_str100[] =
	"It's not hungry (It's merely pinin' for the Fjords).  Besides\n"
	"You have no bird seed.\n";

static PROGMEM const char _adventtxt4_str101[] =
	"The snake has now devoured your bird.\n";

static PROGMEM const char _adventtxt4_str102[] =
	"There's nothing here it wants to eat (Except perhaps you).\n";

static PROGMEM const char _adventtxt4_str103[] =
	"You fool, Dwarves eat only coal!  Now you've made\n"
	"him REALLY mad !!\n";

static PROGMEM const char _adventtxt4_str104[] =
	"You have nothing in which to carry it.\n";

static PROGMEM const char _adventtxt4_str105[] =
	"Your bottle is already full.\n";

static PROGMEM const char _adventtxt4_str106[] =
	"There is nothing here with which to fill the bottle.\n";

static PROGMEM const char _adventtxt4_str107[] =
	"Your bottle is now full of water.\n";

static PROGMEM const char _adventtxt4_str108[] =
	"Your bottle is now full of oil.\n";

static PROGMEM const char _adventtxt4_str109[] =
	"You can't fill that.\n";

static PROGMEM const char _adventtxt4_str110[] =
	"Don't be ridiculous!\n";

static PROGMEM const char _adventtxt4_str111[] =
	"The door is extremely rusty and refuses to open.\n";

static PROGMEM const char _adventtxt4_str112[] =
	"The plant indignantly shakes the oil off its leaves and asks:\n"
	"\"Water?\".\n";

static PROGMEM const char _adventtxt4_str113[] =
	"The hinges are quite thoroughly rusted now and won't budge.\n";

static PROGMEM const char _adventtxt4_str114[] =
	"The oil has freed up the hinges so that the door will now move,\n"
	"although it requires some effort.\n";

static PROGMEM const char _adventtxt4_str115[] =
	"The plant has exceptionally deep roots and cannot be pulled free.\n";

static PROGMEM const char _adventtxt4_str116[] =
	"The Dwarves' knives vanish as they strike the walls of the cave.\n";

static PROGMEM const char _adventtxt4_str117[] =
	"Something you're carrying won't fit through the tunnel with\n"
	"you.  You'd best take inventory and drop something.\n";

static PROGMEM const char _adventtxt4_str118[] =
	"You can't fit this five-foot clam through that little passage!\n";

static PROGMEM const char _adventtxt4_str119[] =
	"You can't fit this five foot oyster through that little passage!\n";

static PROGMEM const char _adventtxt4_str120[] =
	"I advise you to put down the clam before opening it. >STRAIN!<\n";

static PROGMEM const char _adventtxt4_str121[] =
	"I advise you to put down the oyster before opening it.\n"
	">WRENCH!<\n";

static PROGMEM const char _adventtxt4_str122[] =
	"You don't have anything strong enough to open the clam.\n";

static PROGMEM const char _adventtxt4_str123[] =
	"You don't have anything strong enough to open the oyster.\n";

static PROGMEM const char _adventtxt4_str124[] =
	"A glistening pearl falls out of the clam and rolls away.\n"
	"Goodness, this must really be an oyster.  (I never was\n"
	"very good at identifying bivalves.)  Whatever it is,\n"
	"it has now snapped shut again.\n";

static PROGMEM const char _adventtxt4_str125[] =
	"The oyster creaks open, revealing nothing but oyster inside.\n"
	"It promptly snaps shut again.\n";

static PROGMEM const char _adventtxt4_str126[] =
	"You have crawled around in some little holes and found your\n"
	"way blocked by a recent cave-in.  You are now back in the\n"
	"main passage.\n";

static PROGMEM const char _adventtxt4_str127[] =
	"There are faint rustling noises from the darkness behind\n"
	"you.\n";

static PROGMEM const char _adventtxt4_str128[] =
	"Out from the shadows behind you pounces a bearded pirate!\n"
	"\"Har, har\" he chortles, \"I'll just take all this booty and\n"
	"hide it away with me chest deep in the maze!\".  He snatches\n"
	"your treasure and vanishes into the gloom.\n";

static PROGMEM const char _adventtxt4_str129[] =
	"A sepulchral voice reverberating through the cave says:\n"
	"\"Cave closing soon.  All adventurers exit immediately\n"
	"through main office.\"\n";

static PROGMEM const char _adventtxt4_str130[] =
	"A mysterious recorded voice groans into life and announces:\n"
	"\"This exit is closed.  Please leave via main office.\"\n";

static PROGMEM const char _adventtxt4_str131[] =
	"It looks as though you're dead.  Well, seeing as how it's so\n"
	"close to closing time anyway, I think we'll just call it a day.\n";

static PROGMEM const char _adventtxt4_str132[] =
	"The sepulchral voice entones, \"The cave is now closed.\"  As\n"
	"the echoes fade, there is a blinding flash of light (and a\n"
	"small puff of orange smoke). . . . \n"
	"As your eyes refocus you look around and find...\n";

static PROGMEM const char _adventtxt4_str133[] =
	"There is a loud explosion, and a twenty-foot hole appears in\n"
	"the far wall, burying the Dwarves in the rubble.  You march\n"
	"through the hole and find yourself in the main office, where\n"
	"a cheering band of friendly elves carry the conquering\n"
	"adventurer off into the sunset.\n";

static PROGMEM const char _adventtxt4_str134[] =
	"There is a loud explosion, and a twenty-foot hole appears in\n"
	"the far wall, burying the snakes in the rubble.  A river of\n"
	"molten lava pours in through the hole, destroying\n"
	"everything in its path, including you!!\n";

static PROGMEM const char _adventtxt4_str135[] =
	"There is a loud explosion, and you are suddenly splashed across\n"
	"the walls of the room.\n";

static PROGMEM const char _adventtxt4_str136[] =
	"The resulting ruckus has awakened the Dwarves.  There are now\n"
	"several threatening little Dwarves in the room with you!\n"
	"Most of them throw knives at you!  All of them get you!\n";

static PROGMEM const char _adventtxt4_str137[] =
	"Oh, leave the poor unhappy bird alone.\n";

static PROGMEM const char _adventtxt4_str138[] =
	"I daresay whatever you want is around here somewhere.\n";

static PROGMEM const char _adventtxt4_str139[] =
	"I don't know the word \"stop\".   Use \"quit\" if you want to\n"
	"give up.\n";

static PROGMEM const char _adventtxt4_str140[] =
	"You can't get there from here.\n";

static PROGMEM const char _adventtxt4_str141[] =
	"You are being followed by a very large, tame bear.\n";

static PROGMEM const char _adventtxt4_str142[] =
	"If you want to end your adventure early, say \"quit\".  To suspend your \n"
	"adventure such that you can continue later say \"suspend\" (or \"pause\" \n"
	"or \"save\").  To load a previously saved game, say 'load' or 'restore'.  \n"
	"To see how well you're doing, say \"score\".  To get full credit for a \n"
	"treasure, you must have left it safely in the building, though you get \n"
	"partial credit just for locating it. You lose points for getting \n"
	"killed, or for quitting, though the former costs you more. \n"
	"There are also points based on how much (If any) of the cave you've \n"
	"managed to explore;  in particular, there is a large bonus just for \n"
	"getting in (to distinguish the beginners from the rest of the pack), \n"
	"and there are other ways to determine whether you've been through some \n"
	"of the more harrowing sections. \n"
	"If you think you've found all the treasures, just keep exploring for a \n"
	"while.  If nothing interesting happens, you haven't found them all \n"
	"yet.  If something interesting DOES happen, it means you're getting a \n"
	"bonus and have an opportunity to garner many more points in the \n"
	"master's section.\n"
	"I may occasionally offer hints in you seem to be having trouble.  If I \n"
	"do, I'll warn you in advance how much it will affect your score to \n"
	"accept the hints.  Finally, to save paper, you may specify \"brief\", \n"
	"which tells me never to repeat the full description of a place unless \n"
	"you explicitly ask me to.\n";

static PROGMEM const char _adventtxt4_str143[] =
	"Do you indeed wish to quit now?\n";

static PROGMEM const char _adventtxt4_str144[] =
	"There is nothing here with which to fill the vase.\n";

static PROGMEM const char _adventtxt4_str145[] =
	"The sudden change in temperature has delicately shattered\n"
	"the vase.\n";

static PROGMEM const char _adventtxt4_str146[] =
	"It is beyond your power to do that.\n";

static PROGMEM const char _adventtxt4_str147[] =
	"I don't know how.\n";

static PROGMEM const char _adventtxt4_str148[] =
	"It is too far up for you to reach.\n";

static PROGMEM const char _adventtxt4_str149[] =
	"You killed a little Dwarf.  The body vanished in a cloud\n"
	"of greasy black smoke.\n";

static PROGMEM const char _adventtxt4_str150[] =
	"The shell is very strong and impervious to attack.\n";

static PROGMEM const char _adventtxt4_str151[] =
	"What's the matter, can't you read?  Now you'd best start\n"
	"over.\n";

static PROGMEM const char _adventtxt4_str152[] =
	"The axe bounces harmlessly off the dragon's thick scales.\n";

static PROGMEM const char _adventtxt4_str153[] =
	"The dragon looks rather nasty.  You'd best not try to get by.\n";

static PROGMEM const char _adventtxt4_str154[] =
	"The little bird attacks the green dragon, and in an\n"
	"astounding flurry gets burnt to a cinder.  The ashes blow away.\n";

static PROGMEM const char _adventtxt4_str155[] =
	"On what?\n";

static PROGMEM const char _adventtxt4_str156[] =
	"Okay, from now on I'll only describe a place in full the\n"
	"first time you come to it.  To get the full description\n"
	"say \"look\".\n";

static PROGMEM const char _adventtxt4_str157[] =
	"Trolls are close relatives with the rocks and have skin as\n"
	"tough as that of a rhinoceros.  The troll fends off your\n"
	"blows effortlessly.\n";

static PROGMEM const char _adventtxt4_str158[] =
	"The troll deftly catches the axe, examines it carefully,\n"
	"and tosses it back, declaring, \"Good workmanship,\n"
	"but it's not valuable enough.\".\n";

static PROGMEM const char _adventtxt4_str159[] =
	"The troll catches your treasure and scurries away out of sight.\n";

static PROGMEM const char _adventtxt4_str160[] =
	"The troll refuses to let you cross.\n";

static PROGMEM const char _adventtxt4_str161[] =
	"There is no longer any way across the chasm.\n";

static PROGMEM const char _adventtxt4_str162[] =
	"Just as you reach the other side, the bridge buckles beneath\n"
	"the weight of the bear, which was still following you around.\n"
	"You scrabble desperately for support, but as the bridge \n"
	"collapses you stumble back and fall into the chasm.\n";

static PROGMEM const char _adventtxt4_str163[] =
	"The bear lumbers toward the troll, who lets out a\n"
	"startled shriek and scurries away.  The bear soon gives\n"
	"up pursuit and wanders back.\n";

static PROGMEM const char _adventtxt4_str164[] =
	"The axe misses and lands near the bear where you can't get\n"
	"at it.\n";

static PROGMEM const char _adventtxt4_str165[] =
	"With what?  Your bare hands?  Against HIS bear hands??\n";

static PROGMEM const char _adventtxt4_str166[] =
	"The bear is confused;  he only wants to be your friend.\n";

static PROGMEM const char _adventtxt4_str167[] =
	"For crying out loud, the poor thing is already dead!\n";

static PROGMEM const char _adventtxt4_str168[] =
	"The bear eagerly wolfs down your food, after which he seems\n"
	"to calm down considerably, and even becomes rather friendly.\n";

static PROGMEM const char _adventtxt4_str169[] =
	"The bear is still chained to the wall.\n";

static PROGMEM const char _adventtxt4_str170[] =
	"The chain is still locked.\n";

static PROGMEM const char _adventtxt4_str171[] =
	"The chain is now unlocked.\n";

static PROGMEM const char _adventtxt4_str172[] =
	"The chain is now locked.\n";

static PROGMEM const char _adventtxt4_str173[] =
	"There is nothing here to which the chain can be locked.\n";

static PROGMEM const char _adventtxt4_str174[] =
	"There is nothing here to eat.\n";

static PROGMEM const char _adventtxt4_str175[] =
	"Do you want the hint?\n";

static PROGMEM const char _adventtxt4_str176[] =
	"Do you need help getting out of the maze?\n";

static PROGMEM const char _adventtxt4_str177[] =
	"You can make the passages look less alike by dropping things.\n";

static PROGMEM const char _adventtxt4_str178[] =
	"Are you trying to explore beyond the plover room?\n";

static PROGMEM const char _adventtxt4_str179[] =
	"There is a way to explore that region without having to\n"
	"worry about falling into a pit.  None of the objects\n"
	"available is immediately useful in descovering the secret.\n";

static PROGMEM const char _adventtxt4_str180[] =
	"Do you need help getting out of here?\n";

static PROGMEM const char _adventtxt4_str181[] =
	"Don't go west.\n";

static PROGMEM const char _adventtxt4_str182[] =
	"Gluttony is not one of the Troll's vices.  Avarice, however, is.\n";

static PROGMEM const char _adventtxt4_str183[] =
	"Your lamp is getting dim.. You'd best start wrapping this up,\n"
	"unless you can find some fresh batteries.  I seem to recall\n"
	"there's a vending machine in the maze.  Bring some coins\n"
	"with you.\n";

static PROGMEM const char _adventtxt4_str184[] =
	"Your lamp has run out of power.\n";

static PROGMEM const char _adventtxt4_str185[] =
	"There's not much point in wandering around out here, and you\n"
	"can't explore the cave without a lamp.  So let's just call\n"
	"it a day.\n";

static PROGMEM const char _adventtxt4_str186[] =
	"There are faint rustling noises from the darkness behind you.\n"
	"As you turn toward them, the beam of your lamp falls across a\n"
	"bearded pirate.  He is carrying a large chest.  \"Shiver me\n"
	"timbers!\"  he cries, \"I've been spotted!  I'd best hide\n"
	"meself off to the maze and hide me chest!\".  With that,\n"
	"he vanished into the gloom.\n";

static PROGMEM const char _adventtxt4_str187[] =
	"Your lamp is getting dim.  You'd best go back for\n"
	"those batteries.\n";

static PROGMEM const char _adventtxt4_str188[] =
	"Your lamp is getting dim.. I'm taking the liberty of replacing\n"
	"the batteries.\n";

static PROGMEM const char _adventtxt4_str189[] =
	"Your lamp is getting dim, and you're out of spare batteries.\n"
	"You'd best start wrapping this up.\n";

static PROGMEM const char _adventtxt4_str190[] =
	"I'm afraid the magazine is written in Dwarvish.\n";

static PROGMEM const char _adventtxt4_str191[] =
	"\"This is not the maze where the pirate leaves his treasure\n"
	"chest.\"\n";

static PROGMEM const char _adventtxt4_str192[] =
	"Hmm, this looks like a clue, which means it'll cost you 10\n"
	"points to read it.  Should I go ahead and read it anyway?\n";

static PROGMEM const char _adventtxt4_str193[] =
	"It says, \"There is something strange about this place,\n"
	"such that one of the words I've always known now has\n"
	"a new effect.\"\n";

static PROGMEM const char _adventtxt4_str194[] =
	"It says the same thing it did before.\n";

static PROGMEM const char _adventtxt4_str195[] =
	"I'm afraid I don't understand.\n";

static PROGMEM const char _adventtxt4_str196[] =
	"\"Congratulations on bringing light into the dark-room!\"\n";

static PROGMEM const char _adventtxt4_str197[] =
	"You strike the mirror a resounding blow, whereupon it\n"
	"shatters into a myriad tiny fragments.\n";

static PROGMEM const char _adventtxt4_str198[] =
	"You have taken the vase and hurled it delicately to the\n"
	"ground.\n";

static PROGMEM const char _adventtxt4_str199[] =
	"You prod the nearest Dwarf, who wakes up grumpily, takes\n"
	"one look at you, curses, and grabs for his axe.\n";

static PROGMEM const char _adventtxt4_str200[] =
	"Is this acceptable?\n";

static PROGMEM const char _adventtxt4_str201[] =
	"There's no point in suspending a demonstration game.\n";


PROGMEM PGM_P const adventtxt4[201] = {
    _adventtxt4_str1,
    _adventtxt4_str2,
    _adventtxt4_str3,
    _adventtxt4_str4,
    _adventtxt4_str5,
    _adventtxt4_str6,
    _adventtxt4_str7,
    _adventtxt4_str8,
    _adventtxt4_str9,
    _adventtxt4_str10,
    _adventtxt4_str11,
    _adventtxt4_str12,
    _adventtxt4_str13,
    _adventtxt4_str14,
    _adventtxt4_str15,
    _adventtxt4_str16,
    _adventtxt4_str17,
    _adventtxt4_str18,
    _adventtxt4_str19,
    _adventtxt4_str20,
    _adventtxt4_str21,
    _adventtxt4_str22,
    _adventtxt4_str23,
    _adventtxt4_str24,
    _adventtxt4_str25,
    _adventtxt4_str26,
    _adventtxt4_str27,
    _adventtxt4_str28,
    _adventtxt4_str29,
    _adventtxt4_str30,
    _adventtxt4_str31,
    _adventtxt4_str32,
    _adventtxt4_str33,
    _adventtxt4_str34,
    _adventtxt4_str35,
    _adventtxt4_str36,
    _adventtxt4_str37,
    _adventtxt4_str38,
    _adventtxt4_str39,
    _adventtxt4_str40,
    _adventtxt4_str41,
    _adventtxt4_str42,
    _adventtxt4_str43,
    _adventtxt4_str44,
    _adventtxt4_str45,
    _adventtxt4_str46,
    _adventtxt4_str47,
    _adventtxt4_str48,
    _adventtxt4_str49,
    _adventtxt4_str50,
    _adventtxt4_str51,
    _adventtxt4_str52,
    _adventtxt4_str53,
    _adventtxt4_str54,
    _adventtxt4_str55,
    _adventtxt4_str56,
    _adventtxt4_str57,
    _adventtxt4_str58,
    _adventtxt4_str59,
    _adventtxt4_str60,
    _adventtxt4_str61,
    _adventtxt4_str62,
    _adventtxt4_str63,
    _adventtxt4_str64,
    _adventtxt4_str65,
    _adventtxt4_str66,
    _adventtxt4_str67,
    _adventtxt4_str68,
    _adventtxt4_str69,
    _adventtxt4_str70,
    _adventtxt4_str71,
    _adventtxt4_str72,
    _adventtxt4_str73,
    _adventtxt4_str74,
    _adventtxt4_str75,
    _adventtxt4_str76,
    _adventtxt4_str77,
    _adventtxt4_str78,
    _adventtxt4_str79,
    _adventtxt4_str80,
    _adventtxt4_str81,
    _adventtxt4_str82,
    _adventtxt4_str83,
    _adventtxt4_str84,
    _adventtxt4_str85,
    _adventtxt4_str86,
    _adventtxt4_str87,
    _adventtxt4_str88,
    _adventtxt4_str89,
    _adventtxt4_str90,
    _adventtxt4_str91,
    _adventtxt4_str92,
    _adventtxt4_str93,
    _adventtxt4_str94,
    _adventtxt4_str95,
    _adventtxt4_str96,
    _adventtxt4_str97,
    _adventtxt4_str98,
    _adventtxt4_str99,
    _adventtxt4_str100,
    _adventtxt4_str101,
    _adventtxt4_str102,
    _adventtxt4_str103,
    _adventtxt4_str104,
    _adventtxt4_str105,
    _adventtxt4_str106,
    _adventtxt4_str107,
    _adventtxt4_str108,
    _adventtxt4_str109,
    _adventtxt4_str110,
    _adventtxt4_str111,
    _adventtxt4_str112,
    _adventtxt4_str113,
    _adventtxt4_str114,
    _adventtxt4_str115,
    _adventtxt4_str116,
    _adventtxt4_str117,
    _adventtxt4_str118,
    _adventtxt4_str119,
    _adventtxt4_str120,
    _adventtxt4_str121,
    _adventtxt4_str122,
    _adventtxt4_str123,
    _adventtxt4_str124,
    _adventtxt4_str125,
    _adventtxt4_str126,
    _adventtxt4_str127,
    _adventtxt4_str128,
    _adventtxt4_str129,
    _adventtxt4_str130,
    _adventtxt4_str131,
    _adventtxt4_str132,
    _adventtxt4_str133,
    _adventtxt4_str134,
    _adventtxt4_str135,
    _adventtxt4_str136,
    _adventtxt4_str137,
    _adventtxt4_str138,
    _adventtxt4_str139,
    _adventtxt4_str140,
    _adventtxt4_str141,
    _adventtxt4_str142,
    _adventtxt4_str143,
    _adventtxt4_str144,
    _adventtxt4_str145,
    _adventtxt4_str146,
    _adventtxt4_str147,
    _adventtxt4_str148,
    _adventtxt4_str149,
    _adventtxt4_str150,
    _adventtxt4_str151,
    _adventtxt4_str152,
    _adventtxt4_str153,
    _adventtxt4_str154,
    _adventtxt4_str155,
    _adventtxt4_str156,
    _adventtxt4_str157,
    _adventtxt4_str158,
    _adventtxt4_str159,
    _adventtxt4_str160,
    _adventtxt4_str161,
    _adventtxt4_str162,
    _adventtxt4_str163,
    _adventtxt4_str164,
    _adventtxt4_str165,
    _adventtxt4_str166,
    _adventtxt4_str167,
    _adventtxt4_str168,
    _adventtxt4_str169,
    _adventtxt4_str170,
    _adventtxt4_str171,
    _adventtxt4_str172,
    _adventtxt4_str173,
    _adventtxt4_str174,
    _adventtxt4_str175,
    _adventtxt4_str176,
    _adventtxt4_str177,
    _adventtxt4_str178,
    _adventtxt4_str179,
    _adventtxt4_str180,
    _adventtxt4_str181,
    _adventtxt4_str182,
    _adventtxt4_str183,
    _adventtxt4_str184,
    _adventtxt4_str185,
    _adventtxt4_str186,
    _adventtxt4_str187,
    _adventtxt4_str188,
    _adventtxt4_str189,
    _adventtxt4_str190,
    _adventtxt4_str191,
    _adventtxt4_str192,
    _adventtxt4_str193,
    _adventtxt4_str194,
    _adventtxt4_str195,
    _adventtxt4_str196,
    _adventtxt4_str197,
    _adventtxt4_str198,
    _adventtxt4_str199,
    _adventtxt4_str200,
    _adventtxt4_str201,
};
