//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*/   /*Command*/		/*Update Interval*/	/*Update Signal*/	
	{"\uf1eb ", "wireless",		2,	0},
	{"\uf0ac ", "active",		5,	0},
	{"\uf187 ", "newpackages",	5,	0},
	{"\uf0eb ", "brightness",	0,	11},
	{"\uf028 ", "volume",		0,	10},
	{"\uf2db ", "ram",		3,	0},
	{"\uf0e4 ", "cpu",		5,	0},
	{"", "battery",			5,	0},
	{"\uf017  ","datetime",		60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "    ";
