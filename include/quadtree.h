#ifndef QUADTREE_H
#define QUADTREE_H

#include"pixel.h"
#include<iostream>

class QuadTree{
private:
	//Holds the boundary of this tree
	Point topLeft;
	Point botRight;

	//Details of this pixel
	Pixel *thisPixel;

	//Children of this Tree
	QuadTree *topLeftTree;
	QuadTree *topRightTree;
	QuadTree *botLeftTree;
	QuadTree *botRightTree;
	//
	bool inBoundary(Point&);
	//Helper functions
	bool insert(Pixel*);
	Pixel* search(Pixel*);

public:
	QuadTree();
	QuadTree(Point& _topLeft, Point& _topRight);
};

#endif
