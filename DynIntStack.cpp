#include <iostream>
#include "DynIntStack.h"
using namespace std;

//************************************************************************
//Destructor 
//This function deletes every node in the list 
//************************************************************************

DynIntStack::~DynIntStack()
{
	StackNode* nodePtr = nullptr, * nextNode = nullptr;

	//position nodePtr at the top of the stack
	nodePtr = top;

	//traverse the list deleting each node
	while (nodePtr != nullptr)
	{
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

//************************************************************************
//member function push pushes the argument onto 
//the stack 
//************************************************************************

void DynIntStack::push(int num)
{
	StackNode* newNode = nullptr;    //pointer to a new node

	//allocate a new node and store num there
	newNode = new StackNode;
	newNode->value = num;

	//If there are no nodes in the list 
	//make newNode the first node
	if (isEmpty())
	{
		top = newNode;
		newNode->next = nullptr;

	}
	else //otherwise, insert newNode befor top
	{
		newNode->next = top;
		top = newNode;
	}
}
//***********************************************************************
//member function pop pops the value at the top 
//of the stack off, and copies it into the variable
//passed as an argument 
//************************************************************************

void DynIntStack::pop(int& num)
{
	StackNode* temp = nullptr;     //temporary pointer

	//First make sure the stack isnt empty 
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
	}
	else //pop value off top of stack 
	{
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;
	}
}
//***********************************************************************
//member funciton isEmpty returns true if the stack 
//is empty, or false otherwise 
//***********************************************************************

bool DynIntStack::isEmpty()
{
	bool status;

	if (!top)
		status = true;
	else
		status = false;
	return status;
}
