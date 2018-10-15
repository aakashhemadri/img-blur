#include"quadtree.h"

QuadTree::QuadTree()
{
	this->topLeft		= Point(0, 0);
	this->botRight		= Point(0, 0);
	this->thisPixel		= NULL;
	this->topLeftTree	= NULL;
	this->topRightTree	= NULL;
	this->botLeftTree	= NULL;
	this->botRightTree	= NULL;
}
QuadTree::QuadTree(Point& _topLeft, Point& _botRight)
{
	this->topLeft		= _topLeft;
	this->botRight		= _botRight;
	this->thisPixel		= NULL;
	this->topLeftTree	= NULL;
	this->topRightTree	= NULL;
	this->botLeftTree	= NULL;
	this->botRightTree	= NULL;
}
//Helper function definitions
bool QuadTree::inBoundary(Point& point)
{
	return (point.getX() >= topLeft.getX() && point.getX() <= botRight.getX() && \
	point.getY() >= topLeft.getY() && point.getY() <= botRight.getY());
}
bool QuadTree::insert(Pixel* node)
{
	if(node == NULL || )
		return false;
	return false;
}
Pixel* QuadTree::search(Pixel* node){
	return node;
}
