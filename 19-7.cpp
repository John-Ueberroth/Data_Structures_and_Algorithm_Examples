//This program counts the nodes in a list
#include <iostream>
#include "NumberListV3.h"
using namespace std;

int main()
{
	const int MAX = 10; //max number of values 

	//define a NumberList object
	NumberList list;

	//buld the list with a series of numbers 
	for (int x = 0; x < MAX; x++)
		list.insertNode(x);

	//display the number of nodes in the list 
	cout << "The number of nodes is "
		<< list.NumNodes() << endl;
	return 0;
}