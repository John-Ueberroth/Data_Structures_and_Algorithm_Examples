//This program demonstrates the DynamicQueue template 
#include <iostream>
#include <string>
#include "DynamicQueue.h"
using namespace std;

const int QUEUE_SIZE = 5;

int main()
{
	string name;

	//create a Queue 
	DynamicQueue<string> queue;

	//enqueue some names
	for (int count = 0; count < QUEUE_SIZE; count++)
	{
		cout << "Enter a name: ";
		getline(cin, name);
		queue.enqueue(name);

	}
	//dequeue the names and display them.
	cout << "\nHere are the names you entered: \n";
	for (int count = 0; count < QUEUE_SIZE; count++)
	{
		queue.dequeue(name);
		cout << name << endl;
	}
	return 0;
}