//This program demonstrates the BinaryTree class template
//It builds a binary tree with 5 nodes 
#include <iostream>
#include "BinaryTree.h"
using namespace std;

const int NUM_NODES = 5;

int main()
{
	string name;

	//create the binary tree
	BinaryTree<string> tree;

	//insert some names
	for (int count = 0; count < NUM_NODES; count++)
	{
		cout << "Enter a name: ";
		cin >> name;
		tree.insertNode(name);
	}

	//display the values 
	cout << "\nHere are the values in the tree:\n";
	tree.displayInOrder();
	return 0;
	}
}