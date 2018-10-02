#include"point.h"
Point::Point()
{
	this->m_x = 0;
	this->m_y = 0;
}
Point::Point(double x, double y)
{
	this->m_x 			= x;
	this->m_y 			= y;
}
double Point::getX()
{
	return this->m_x;
}
double Point::getY()
{
	return this->m_y;
}
void Point::setX(double x)
{
	this->m_x = x;
}
void Point::setY(double y)
{
	this->m_y = y;
}
