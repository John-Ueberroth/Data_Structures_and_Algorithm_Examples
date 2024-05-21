//This program demonstrates the IntQueue class
#include <iostream>
#include "IntQueue.h"
using namespace std;

int main()
{
	const int MAX_VALUES = 5;   //max number of values 

	//create an IntQueue to hold the values 
	IntQueue iQueue(MAX_VALUES);

	//enqueue a series of items
	cout << "Enqueueing " << MAX_VALUES << " items...\n";
	for (int x = 0; x < MAX_VALUES; x++)
		iQueue.enqueue(x);

	//attempt to enqueue just one more item 
	cout << "Now attempting to enqueue again...\n";
	iQueue.enqueue(MAX_VALUES);

	//dequeue and retrieve all items in the queue
	cout << "the values in the queue were: \n";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		cout << value << endl;
	}
	return 0;
}