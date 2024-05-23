//This program demonstrates the recursive function 
//for displaying the list's nodes in reverse 
#include <iostream>
#include "NumberListV3.h"
using namespace std;

int main()
{
	const double MAX = 10.0;  //upper limit of values 

	//create a NumberList object 
	NumberList list;

	//add a series of numbers to the list 
	for (double x = 1.5; x < MAX; x += 1.1)
		list.appendNode(x);

	//display the values in the list 
	cout << "Here are the values in the list: \n";
	list.displayList();

	//display the values in reverse order 
	cout << "Here are the values in reverese order: \n";
	list.displayBackwards();
	return 0;
}