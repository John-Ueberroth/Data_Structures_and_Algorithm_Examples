//Specification file for the DynIntStack class
#ifndef DYNINTSTACK_H
#define DYNINTSTACK_H

class DynIntStack
{
private:
	//structure for stack nodes
	struct StackNode
	{
		int value;         //value in the node
		StackNode* next;   //Pointer to the next node


	};
	StackNode* top;
public:
	//constructor 
	DynIntStack()
	{
		top = nullptr;

	}
	//destructor 
	~DynIntStack();

	//stack operations 
	void push(int);
	void pop(int&);
	bool isEmpty();
};
#endif
