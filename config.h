//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/* {"⌨", "sb-kbselect", 0, 30}, */
	/* {"",	"sb-music",	0,	11}, */
	/* {"",	"sb-price xmr-btc \"Monero to Bitcoin\" 🔒 25",	9000,	25}, */
	/* {"",	"sb-price xmr Monero 🔒 24",			9000,	24}, */
	/* {"",	"sb-price eth Ethereum 🍸 23",			9000,	23}, */
	/* {"",	"sb-price btc Bitcoin 💰 21",			9000,	21}, */
	{"",	"weather",	18000,	5},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"internet",	5,	4},
	{"",	"clock",	60,	1}
	/* {"",	"sb-iplocate", 0,	27}, */
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = "|";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
