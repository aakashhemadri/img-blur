#ifndef QUADTREE_H
#define QUADTREE_H

#include"node.h"
#include<iostream>

class QuadTree{
private:
	//Holds the boundary of this tree
	Point topLeft;
	Point botRight;

	//Details of this node
	Node *thisNode;

	//Children of this Tree
	QuadTree *topLeftTree;
	QuadTree *topRightTree;
	QuadTree *botLeftTree;
	QuadTree *botRightTree;
public:
	QuadTree();
	QuadTree(Point& _topLeft,Point& _topRight);
};

#endif
