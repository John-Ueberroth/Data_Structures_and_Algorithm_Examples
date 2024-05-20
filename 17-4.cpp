//This program demonstrates the deleteNode member function 
#include<iostream>
#include "NumberList.h"
using namespace std;

int main()
{
	//define a NumberList object 
	NumberList list;

	//build the list with some values 
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);

	//display the list 
	cout << "Here are the initial values: \n";
	list.displayList();
	cout << endl;

	//delete the middle node
	cout << "now deleteing the node in the middle.\n";
	list.deleteNode(7.9);

	//display the list 
	cout << "Here are the nodes left. \n";
	list.displayList();
	cout << endl;

	//delete the last node
	cout << "Now deleting the last node.\n";
	list.deleteNode(12.6);

	//display the list 
	cout << "Here are the nodes left. \n";
	list.displayList();
	cout << endl;

	//delete the only node left in the list 
	cout << "Now deleting the only remaining node.\n";
	list.deleteNode(2.5);

	//display the list 
	cout << "Here are the nodes left.\n";
	list.displayList();
	return 0;


}