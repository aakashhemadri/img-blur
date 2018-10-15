#ifndef PIXEL_H
#define PIXEL_H

#include"point.h"

class Pixel
{
	//This will be the "pixel" data that for now is going to be abstracted as just an integer
	int R;
	int G;
	int B;
	//Position of the "pixel" we are identifying throught this node.
	Point pos;
public:
	Pixel();
	Pixel(Point&);
};

#endif
