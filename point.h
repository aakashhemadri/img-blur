#ifndef POINT_H
#define POINT_H

class Point{
	private:
		double m_x;
		double m_y;
		int m_opt_value;
	public:
		Point();
		Point(double x, double y, int opt_value);
		double getX();
		double getY();
		int getValue();
		void setX(double);
		void setY(double);
		void setValue(int value);
};
Point::Point(){
	this->m_x = 0;
	this->m_y = 0;
}
Point::Point(double x, double y, int opt_value){
	this->m_x = x;
	this->m_y = y;
	this->m_opt_value = opt_value;
}
double Point::getX(){ return this->m_x; }
double Point::getY(){ return this->m_y; }
void Point::setX(double x){ this->m_x = x; }
void Point::setY(double y){ this->m_y = y; }
int Point::getValue(){ return this->m_opt_value; }
void Point::setValue(int value){ this->m_opt_value = value; }

#endif
