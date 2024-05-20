//This program demonstrates the liked list template 
#include<iostream>
#include"LinkedList.h"
#include "FeetInchesCh17.h"
using namespace std;


int main()
{
	//define a LinkedList object 
	LinkedList< FeetInches > list;

	//define some FeetInches objects
	FeetInches distance1(5, 4);  //5 feet 4 inches
	FeetInches distance2(6, 8);   //6 feet 8 inches
	FeetInches distance3(8, 9);   //8 feet 9 inches

	//store the FeetInches objects in the list 
	list.appendNode(distance1);    //5 feet 4 inches
	list.appendNode(distance2);    //6 feet 8 inches
	list.appendNode(distance3);    //8 feet 9 inches

	//display the calues in the list 
	cout << "Here are the initial values: \n";
	list.displayList();
	cout << endl;

	//Insert another feetInches obeject 
	cout << "now inserting the value 7 feet 2 inchechs.\n";
	FeetInches distance4(7, 2);
	list.insertNode(distance4);
	cout << endl;

	//display the values in the list 
	cout << "Here are the nodes now.\n";
	list.displayList();
	cout << endl;

	//delete the last node 
	cout << "Now deleting the last node.\n";
	FeetInches distance5(8, 9);
	list.deleteNode(distance5);

	//display the values in the list 
	cout << "Here are the nodes left.\n";
	list.displayList();
	return 0;
}