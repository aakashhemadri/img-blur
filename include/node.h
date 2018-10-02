#ifndef NODE_H
#define NODE_H

#include"point.h"

class Node{
	//This will be the "pixel" data that for now is going to be abstracted as just an integer
	int data;
	//Position of the "pixel" we are identifying throught this node.
	Point pos;
public:
	Node();
	Node(Point&, int&);
};

#endif
