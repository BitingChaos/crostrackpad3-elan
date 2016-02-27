#include "stdint.h"

struct csgesture_softc {
	//hardware input
	int x[15];
	int y[15];
	int p[15];

	bool buttondown;

	//hardware info
	int resx;
	int resy;
	int phyx;
	int phyy;

	//system output
	int dx;
	int dy;

	int scrollx;
	int scrolly;

	int buttonmask;

	//used internally in driver
	bool mouseDownDueToTap;
	int idForMouseDown;
	bool mousedown;
	int mousebutton;

	int lastx[15];
	int lasty[15];
	int lastp[15];

	int xhistory[15][10];
	int yhistory[15][10];

	int flextotalx[15];
	int flextotaly[15];

	int totalx[15];
	int totaly[15];
	int totalp[15];

	int multitaskingx;
	int multitaskingy;
	int multitaskinggesturetick;
	bool multitaskingdone;

	int tick[15];
	int truetick[15];
	int ticksincelastrelease;
	int tickssinceclick;
};