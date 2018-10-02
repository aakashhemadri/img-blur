#ifndef POINT_H
#define POINT_H

class Point
{
	private:
		//Holds coordinates of a particular point that we would signify a "pixel's"
		//position from topLeft
		double m_x;
		double m_y;
	public:
		Point();
		Point(double x, double y);
		double getX();
		int getValue();
		void setX(double);
		double getY();
		void setY(double);
		void setValue(int value);
};

#endif
