//This program demonstrates the insertNode member function 
#include <iostream>
#include "numberList.h"
using namespace std;

int main()
{
	//define a NumberList object 
	NumberList list;

	//buld the list with some values 
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);

	//Insert a node in the middle of the list 
	list.insertNode(10.5);

	//display the list 
	list.displayList();
	return 0;
}