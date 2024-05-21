#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

//Stack template
template <class T>
class Stack
{
private:
	T* stackArray;
	int stackSize;
	int top;
public:
	//constructor 
	Stack(int);

	//copy constructor 
	Stack(const Stack&);

	//Destruction 
	~Stack();

	//stack operations 
	void push(T);
	void pop(T&);
	bool isFull();
	bool isEmpty();

};

//**************************************************************************
//constructor 
//*************************************************************************

template <class T>
Stack<T>::Stack(int size)
{
	stackArray = new T[size];
	stackSize = size;
	top = -1;
}
//*************************************************************************
//copy constructor 
//*************************************************************************

template<class T>
Stack<T>::Stack(const Stack& obj)
{
	//create the Stack array
	if (obj.stackSize > 0)
		stackArray = new T[obj.stackSize];
	else
		stackArray = nullptr;

	//copy the StackSize attribute 
	stackSize = obj.stackSize;

	//copy the stack contents
	for (int count = 0; count < stackSize; count++)
		stackArray[count] = obj.stackArray[count];

	//set the top of the stack 
	top = obj.top

}
//**********************************************************************
//destructor 
//**********************************************************************
template <class T>
Stack<T>::~Stack()
{
	if (stackSize > 0)
		delete[] stackArray;
}
//************************************************************************
// member function push pushes the argument onto 
//the stack 
//************************************************************************

template <class T>
void Stack<T> ::push(T item)
{
	if (isFull())
	{
		cout << "The stack is full.\n";
	}
	else
	{
		top++;
		stackArray[top] = item;
	}
}
//************************************************************************
//Member function pop pops the value at the top 
//of the stack off, and copies it into the variable
//passed as an argument
//*************************************************************************

template <class T>
bool Stack<T>::isFull()
{
	bool status;

	if (top == stackSize - 1)
		status = true;
	else
		status = false;
	return status;

}
//***********************************************************************
//member function isEmpty returns true if the stack
//is empty, or false otherwise
//************************************************************************

template<class T>
bool Stack<T> ::isEmpty()
{
	bool status;

	if (top == -1)
		status = true;
	else
		status = false;

	return status;
}
#endif

