//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{" Mem: ",	"free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},


	{" ",		"sb-internet",							5,		0},

	{"",		"sb-volume",							1,		1},

	{"",		"sb-battery",							1,		2},

	{"",		"date '+%d %b %Y | %I:%M %p '",					5,		3},
	//{"",		"date '+%b %d (%a) %Y | %I:%M%p'",				5,		0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
