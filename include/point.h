#ifndef POINT_H
#define POINT_H

class Point
{
	private:
		double m_x;
		double m_y;
		int m_opt_value;
	public:
		Point();
		Point(double x, double y, int opt_value);
		double getX();
		int getValue();
		void setX(double);
		double getY();
		void setY(double);
		void setValue(int value);
};

#endif
