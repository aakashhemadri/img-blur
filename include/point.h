#ifndef POINT_H
#define POINT_H

class Point
{
	private:
		//Holds coordinates of a particular point that we would signify a "pixel's"
		//position from topLeft
		//X-Coordinate
		int x;
		//Y-Coordinate
		int y;
	public:
		Point();
		Point(int x, int y);
		int getX();
		int getValue();
		void setX(int);
		int getY();
		void setY(int);
		void setValue(int value);
};

#endif
