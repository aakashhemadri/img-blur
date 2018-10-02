#include"quadtree.h"
QuadTree::QuadTree()
{
	this->topLeft 		= Point(0, 0);
    this->botRight 		= Point(0, 0);
    this->thisNode		= NULL;
    this->topLeftTree  	= NULL;
    this->topRightTree 	= NULL;
    this->botLeftTree  	= NULL;
    this->botRightTree 	= NULL;
}
QuadTree::QuadTree(Point& _topLeft, Point& _botRight)
{
	this->topLeft		= _topLeft;
	this->botRight		= _botRight;
	this->thisNode		= NULL;
    this->topLeftTree  	= NULL;
    this->topRightTree 	= NULL;
    this->botLeftTree 	= NULL;
    this->botRightTree 	= NULL;
}
