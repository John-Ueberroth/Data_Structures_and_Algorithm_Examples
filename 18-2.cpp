//This program demonstrates the MathStack class
#include<iostream>
#include"MathStack.h"
using namespace std;

int main()
{
	int catchVar;    //To hold values popped off the stack 

	//create a MathStack object 
	MathStack stack(5);

	//push 3 and 6 onto the stack 
	cout << "Pushing 3\n";
	stack.push(3);
	cout << "Pushing 6\n";
	stack.push(6);

	//add the two values 
	stack.add();

	//pop the sum off the stack and display it 
	cout << "The sum is ";
	stack.pop(catchVar);
	cout << catchVar << endl << endl;

	//Push 7 and 10 onto the stack
	cout << "Pushing 7\n";
	stack.push(7);
	cout << "Pushing 10\n";
	stack.push(10);

	//subtract 7 from 10
	stack.sub();

	//pop the difference off the stack and display it 
	cout << "The difference is ";
	stack.pop(catchVar);
	cout << catchVar << endl;
	return 0;
}