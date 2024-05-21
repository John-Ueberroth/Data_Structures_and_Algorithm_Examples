//Implementation file for the MathStack class
#include "MathStack.h"

//***********************************************************************
//member function add. add pops
//the first two values off the stack and 
//adds them. The sum is pushed onto the stack 
//***********************************************************************

void MathStack::add()
{
	int num, sum;

	//pop the first two values off the stack.
	pop(sum);
	pop(num);

	//add the two values, store in sum 
	sum += num;

	//push sum back onto the stack 
	push(sum);
}
//************************************************************************
//member function sub. sub pops the 
//first two values off the stack. The
//second value is subtracted from the 
//first value. The difference is pushed 
//onto the stack
//************************************************************************

void MathStack::sub()
{
	int num, diff;

	//pop the first two values off the stack 
	pop(diff);
	pop(num);

	//subtract num from diff
	diff -= num;

	//push diff back onto the stack 
	push(diff);
}
