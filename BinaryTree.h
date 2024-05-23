#ifndef BINARYTREE_H
#define BINARYTREE_H
#include<iostream>
using namespace std;

//BinaryTree template 
template <class T>
class BinaryTree
{
private:
	struct TreeNode
	{
		T value;       //The value in the node 
		TreeNode* left; //pointer to left child node
		TreeNode* right;//pointer to right child node

	};
	TreeNode* root;     //pointer to the root node 

	//private member function 
	void insert(TreeNode*&, TreeNode*&);
	void destroySubTree(TreeNode*);
	void deleteNode(T, TreeNode*&);
	void makeDeletion(TreeNode*&);
	void displayInOrder(TreeNode*) const;
	void displayPostOrder(TreeNode*)const;

public:
	//constructor 
	BinaryTree()
	{
		root = nullptr;

	}
	//destructor 
	~BinaryTree()
	{
		destroySubTree(root);
	}
	//Binary tree operations 
	void insertNode(T);
	bool searchNode(T);
	void remove(T);

	void displayInOrder() const
	{
		displayInOrder(root);
	}
	void displayPreOrder() const
	{
		displayPreOrder(root);

	}
	void displayPostOrder() const
	{
		displayPostOrder(root);
	}

};
//**********************************************************************
//insert accepts a TreeNode pointer and a pointer to a node 
//The function inserts the node into the tree pointed to by
//the TreeNode pointer. This function is called recursively
//***********************************************************************
template<class T>
void BinaryTree<T>::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
	if (nodePtr == nullptr)
		nodePtr = newNode;
	else if (newNode->value < nodePtr->value)
		insert(nodePtr->left, newNode);  //search the left branch 
	else
		insert(nodePtr->right, newNode); //search the right branch 

}
//************************************************************************
//insertNode creates a new node to hold num as its value,
//and passes it to the insert function 
//************************************************************************
template <class T>
void BinaryTree<T>::insertNode(T item)
{
	TreeNode* newNode = nullptr;       //pointer to a new node

	//create a new node and store num in it 
	newNode = new TreeNode;
	newNode->value = item;
	newNode->left = newNode->right = nullptr;

	//insert the node 
	insert(root, newNode);

}
//************************************************************************
//destroySubTree is called by the destructor. It
//deletes all nodes in the tree
//***********************************************************************
template<class T>
void BinaryTree<T>::destroySubTree(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		if (nodePtr->left)
			destroySubTree(nodePtr->left);
		if (nodePtr->right)
			destroySubTree(nodePtr->right);
		delete nodePtr;
	}
}
//************************************************************************
//searchNode determines if a value is present in 
//the tree. If so, the function returns true.
//otherwise, it returns false 
//*************************************************************************
template <class T>
bool BinaryTree<T>::searchNode(T item)
{
	TreeNode* nodePtr = root;

	while (nodePtr)
	{
		if (nodePtr->value == item)
			return true;
		else if (item < nodePtr->value)
			nodePtr = nodePtr->left;
		else
			nodePtr = nodePtr->right;
	}
	return false;
}

//***********************************************************************
//remove calls deleteNode to delete the 
//node whose value member is the same as num
//***********************************************************************
template <class T>
void BinaryTree<T>::remove(T item)
{
	deleteNode(item, root);

}

//**************************************************************************
//deleteNode deletes the node whose value 
//member is the same as num
//*************************************************************************
template <class T> 
void BinaryTree<T>::deleteNode(T item, TreeNode*& nodePtr)
{
	if (item < nodePtr->value)
		deleteNode(item, nodePtr->left);
	else if (item > nodePtr->value)
		deleteNode(item, nodePtr->right);
	else
		makeDeletion(nodePtr);
}
//************************************************************************
//makeDeletion takes a reference to a pointer to the node 
//that is to be deleted. The ndoe is removed and the 
//branches of the tree below the node are reattached
//************************************************************************
template <class T>
void BinaryTree<T>::makeDeletion(TreeNode*& nodePtr)
{
	//Define a temporary pointer to use in reattaching 
	//the left subtree
	TreeNode* tempNodePtr = nullptr;

	if (nodePtr == nullptr)
		cout << "Cannot delete empty node.\n";
	else if (nodePtr->right == nullptr)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;      //reattach the left child 
		delete tempNodePtr;
	}
	else if (nodePtr->left == nullptr)
	{
		tempNode = nodePtr;
		nodePtr = nodePtr->right;      //reattacah the right child 
		delete tempNodePtr;
	}
	//If the node has two children
	else
	{
		//move one node to the right 
		tempNodePtr = nodePtr->right;
		//go to the end left node 
		while (tempNodePtr->left)
			tempNodePtr = tempNodePtr->left;
		//reattach the left subtree
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		//reattach the right subtree
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}
//************************************************************************
//The displayInOrder member function displays the values 
//int the subtree pointed to by nodePtr, via inorder traversal 
//************************************************************************
template<class T>
void BinaryTree<T>::displayInOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}
//************************************************************************
//The displayPreOrder member function displays the values 
//in the subtree pointed to by nodePtr, via preorder traversal
//************************************************************************
template <class T>
void BinaryTree<T>::displayPreOrder(TreeNode* nodePtr) const
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}
}
//*************************************************************************
//The displayPostOrder member function displays the values 
//in the subtree pointed to by nodePtr, via postorder traversal
//**************************************************************************
template<class T>
void BinaryTree<T>::displayPostOrder(TreeNode *nodePtr) const
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}
#endif
