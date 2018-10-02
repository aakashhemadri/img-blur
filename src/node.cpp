#include"node.h"
Node::Node()
{
	this->data = 0;
}
Node::Node(Point& _pos, int& _data)
{
	this->pos 	= _pos;
	this->data 	= _data;
}
