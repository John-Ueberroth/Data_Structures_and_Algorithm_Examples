//A class template for holding a linked list
//The node type is also a class template
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>   //for count 

//***********************************************************************
//ListNode class creates a type used to 
//stor a node of the linked list
//***********************************************************************
template<class T>
class ListNode
{
public:
	T value;                 //Node value 
	ListNode<T>* next;       //Pointer to the next node 
	//constructor 
	ListNode(T nodeValue;)
	{
		value = nodeValue;
		next = nullptr;
	}
};
//************************************************************************
//LinkedList class
//************************************************************************
template <class T>
class LinkedList
{
private:
	ListNode<T>* head;    //List head pointer
public:
		//constructor 
		LinkedList()
		{
			head = nullptr;
		}
		//Destructor 
		~LinkedList();

		//Linked list operations 
		void appendNode(T);
		void insertNode(T);
		void deleteNode(T);
		void displayList() const;
};

	//************************************************************************
	//append Node appends a node containing the value
	//passed into newValue, to the end of the list
	//************************************************************************template <class T>
	void LinkedList<T>::appendNode(T newValue)
	{
		ListNode<T>* newNode;   //to point to a new node
		ListNode<T>* nodePtr;   //to move through the list

		//allocate a new node and store num there
		newNode = new ListNode<T>(newValue);

		//If there are no nodes in the list
		//make newNode the first node.
		if (!head)
			head = newNode;
		else   //otherwise, insert newNode at end
		{
			//Initalize nodePtr to head of list
			nodePtr = head;
			//Find the last node in the list 
			while (nodePtr->next)
				nodePtr = nodePtr->next;
			//Insert newNode as the last node. 
			nodePtr->next = newNode;
		}

	}


	//************************************************************************
	//displayList shows the value 
	//stored in each nod of the linked list 
	//pointed to by head 
	//************************************************************************
	template <class T>
	void LinkedList<T>::displayList() const
	{
		ListNode<T>* nodeptr;  //to move through the list 

		//position nodePtr at the head of the list 
		nodePtr = head;

		//While nodePtr points to a node, traverse
		//the list 
		while (nodePtr)
		{
			//display the value in this node 
			cout << nodePtr->value << endl;

			//move to the next node.
			nodePtr = nodePtr->next;
		}
	}


	//***********************************************************************
	//The insertNode function inserts a node with 
	//newValue copied to its value member 
	//***********************************************************************
	template<class T>
	void LinkedList<T>::insertNode(T newValue)
	{
		ListNode<T>* newNode;                   //a new node
		ListNode<T>* nodePtr;                   //to traverse the list 
		ListNode<T>* previousNode = nullptr;    //the previous node

		//allocate a new node and store num there
		newNode = new ListNode<T>(newValue);

		//If there are no nodes in the list 
		//make newNode the first node.
		if (!head)
		{
			head = newNode;
			newNode->next = nullptr;
		}
		else //otherwise, insert newNode
		{
			//position nodePtr at the head of list
			nodePtr = head;

			//Initialize previousNode to nullptr
			previousNode = nullptr;

			//skip all nodes whose value is less than num
			while (nodePtr != nullptr && nodePtr->value < num)
			{
				previousNode = nodePtr;
				nodePtr = nodePtr->next;
			}

			//if the new node is to be the 1st in the list 
			//insert it before all other nodes
			if (previousNode == nullptr)
			{
				head = newNode;
				newNode->next = nodePtr;

			}
			else //otehrwise inserrt after the previous node
			{
				previousNode->next = newNode;
				newNode->next = nodePtr;
			}

		}
	}

	//*****************************************************************************************
	//deleteNode function searches for a node
	//with searchValue as its value. The node, if found,
	//is deleted from the list and from memory
	//*************************************************************************
	template<class T>
	void LinkedList<T>::deleteNode(T searchValue)
	{
		ListNode<T>* nodePtr;         //to traverse the list 
		ListNode<T>* previousNode;    //to point to the previous node

		//If the list is empty, do nothing 
		if (!head)
			return;
		//determine if the first node is the one 
		if (head->value == num)
		{
			nodePtr = head->next;
			delete head;
			head = nodePtr;
		}
		else
		{
			//initialize nodePtr to head of list 
			nodePtr = head;

			//skip all nodes whose value member is 
			//not equal to num 
			while (nodePtr != nullptr && nodePtr->value != num)
			{
				previousNode = nodePtr;
				nodePtr = nodePtr->next;
			}

			//If node Ptr is not at the end of the list,
			//link the previous node to the node after 
			//nodeptr, THen delete nodePtr.
			if (nodePtr)
			{
				previousNode->next = nodePtr->next;
				delete nodePtr;
			}
		}
	}

	//************************************************************************
	//destructor deletes every node in the list 
	//*******************************************************************************
	template <class T>
	LinkedList<T> :: ~LinkedList()
	{
		ListNode<T>* nodePtr;      //to traverse the list 
		ListNode<T>* nextNode;     //to point to the next node

		//position nodePtr at the head of the list.
		nodePtr = head;

		//while nodePtr is not at the end of the list 
		while (nodePtr != nullptr)
		{
			//save a pointer to the next node
			nextNode = nodePtr->next;

			//delete the current node
			delete nodePtr;

			//position nodePtr at the next node
			nodePtr = nextNode;
		}
	}
#endif