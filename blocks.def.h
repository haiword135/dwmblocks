//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/Hua/Code/Scripts/network.sh", 60,       5},
	{"", "/home/Hua/Code/Scripts/memory.sh",   60,		11},
	{"", "/home/Hua/Code/Scripts/disk.sh",   60,       4},
	{"", "/home/Hua/Code/Scripts/battery.sh", 60,      3},
	{"", "/home/Hua/Code/Scripts/volume.sh",  10,      2},
	{"", "/home/Hua/Code/Scripts/date.sh" ,   1,       1},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "|";
static unsigned int delimLen = 5;
