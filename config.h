//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "dwm.getMemory.sh", 5, 13},
	{"", "dwm.getDisk.sh", 6, 15},
	{"", "dwm.getCpu.sh", 5, 14},
	{"", "dwm.getNetTraf.sh", 1, 12},
	{"", "dwm.getInternet.sh", 5, 4},
	{"", "dwm.getBrightness.sh", 0, 8},
	{"", "dwm.getVolume.sh", 0, 10},
	{"", "dwm.getBattery.sh", 5, 11},
	{"", "dwm.getClock.sh", 1, 16},
	{"", "dwm.wallpaper.sh", 1, 18},
	{"", "dwm.setwallpaper.sh", 0, 19},
	{"", "dwm.screen_extend.sh", 2, 20},
	{"", "dwm.getPackages.sh", 0, 5},
	{"", "dwm.power.sh", 0, 17},

};


//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = ",";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
