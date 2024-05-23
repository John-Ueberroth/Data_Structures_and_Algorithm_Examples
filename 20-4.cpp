//This program builds the binary tree with 5 nodes 
//The deleteNode function is used to remove two of them
#include <iostream>
#include "IntBinaryTree.h"
using namespace std;

int main()
{
	IntBinaryTree tree;

	//Insert some nodes 
	cout << "Inseerting nodes. \n";
	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(3);
	tree.insertNode(12);
	tree.insertNode(9);
	
	//display the values 
	cout << "Here are the values in the tree: \n";
	tree.displayInOrder();

	//delete the value 8
	cout << "deleting 8...\n";
	tree.remove(8);

	//delete the value 12
	cout << "deleting 12...\n";
	tree.remove(12);

	//display the values 
	cout << "Now, here are the nodes: \n";
	tree.displayInOrder();
	return 0;
}
