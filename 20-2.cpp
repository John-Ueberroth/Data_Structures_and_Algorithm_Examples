//This program builds a binary tree with 5 nodes
//The nodes are displayed with inOrder, preOrder, 
//and postOrder algorithims
#include<iostream>
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

	//display in order
	cout << "Inorder traversal: \n";
	tree.displayInOrder();

	//display preorder
	cout << "\nPreorder traversal: \n";
	tree.displayPreOrder();

	//display postorder
	cout << "\nPostorder traversal: \n";
	tree.displayPostOrder();
	return 0;
}