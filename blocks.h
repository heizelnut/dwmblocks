//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
/*Icon*/   /*Command*/		/*Update Interval*/	/*Update Signal*/	
	{"", "sb recording",			2,	0},
	{"ip: ", "sb connected",		2,	0},
	{"new: ", "sb packages",	5,	0},
	{"vol: ", "sb volume",			2,	10},
	{"bat: ", "sb battery",		5,	0},
	{"ram: ", "sb ram",			3,	0},
	{"cpu: ", "sb cpu",			5,	0},
	{"","sb datetime",				15,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
