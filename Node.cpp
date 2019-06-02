#include "Node.h"





int Node::getData()
{
	return Data;
}

void Node::setData(int Value)
{
	
	Data = Value;
}

Node * Node::getprev_p()
{
	return prev_p;
}

void Node::setprev_p(Node * ptr)
{
	prev_p = ptr;
}

Node * Node::getnext_p()
{
	return next_p;
}

void Node::setnext_p(Node * ptr)
{
	next_p = ptr;
}
