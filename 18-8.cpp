//This program demonstrates the Queue template 
#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

const int QUEUE_SIZE = 5;

int main()
{
	string name;

	//create a queue
	Queue<string> queue(QUEUE_SIZE);

	//enqueue some names
	for (int count = 0; count < QUEUE_SIZE; count++)
	{
		cout << "Enter a name: ";
		getline(cin, name);
		queue.enqueue(name);
	}

	//Dequeue the names and display them
	cout << "\nHere are the names you entered: \n";
	for (int count = 0; count < QUEUE_SIZE; count++)
	{
		queue.dequeue(name);
		cout << name << endl;
	}
	return 0;
}