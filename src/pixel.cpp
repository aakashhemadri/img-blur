#include"pixel.h"
Pixel::Pixel()
{
	this->R = this->G = this->B = 0;
}
Pixel::Pixel(Point& _pos, int& _data)
{
	this->pos 	= _pos;
	this->R = this->G = this->B = 0;
}
