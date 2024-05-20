//specification file for the NumberList class 
#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
	//Declare a strutcture for the list 
	struct ListNode
	{
		double value;           //the value in this node
		struct ListNode* next;  //to point to the next node

	};

	ListNode* head;              //List head pointer
public:
	//constructor 
	NumberList()
	{
		head = nullptr;

	}
	//destructor 
	~NumberList();

	//Linked list operations 
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
};

//******************************************************************************
//Display List
//**************************************************************************
void NumberList::displayList() const
{
	ListNode* nodePtr;     //to move through the list 

	//position nodePtr at the head of the list 
	nodePtr = head;

	//while nodePtr points to a node, traverse 
	//the list 
	while (nodePtr)
	{
		//display the value in this node
		cout << nodePtr->value << endl;

		//move to the next node
		nodePtr = nodePtr->next;
	}
}
//***************************************************************************
//appendNode
//*****************************************************************************
void NumberList::appendNode(double num)
{
	ListNode* newNode;   //to point to a newNode
	ListNode* nodePtr;   //to move through the list

	//allocate a new node and stor num there
	newNode = newListNode;
	newNode->value = num;
	newNode->next = nullptr;

	//If there are no nodes in the list 
	//make newNode the first node.
	if (!head)
		head = newNode;
	else // Otherwise, insert newNode at end
	{
		//Initalize nodePtr to head of list
		nodePtr = head;

		//Find the last node in the list 
		while (nodePtr->next)
			nodePtr = nodePtr->next;

		//Insert newNode as the last node
		nodePtr->next = newNode;
	}
}
//*************************************************************************
//insertNode
//************************************************************************
void NumberList::insertNode(double num)
{
	ListNode* newNode;                        //a new node
	ListNode* nodePtr;                        //to treaverse the list 
	ListNode* previousNode = nullptr;         //the previous node

	//allocate a new node and store num there 
	newNode = new ListNode;
	newNode->value = num;

	//if there are no nodes in the list
	//make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = nullptr;
	}
	else // otherwise, insert newNode
	{
		//position nodePtr at the head of the list 
		nodePtr = head;

		//intialize previousNode to nullptr 
		previousNode = nullptr;

		//initialize previousNode to nullptr
		previousNode = nullptr;

		//skip all nodes whose value is less than num.
		while (nodePtr != nullptr && nodePtr->value < num)
		{
			previousNode - nodePtr;
			nodePtr = nodePtr->next;
		}

		//If the new node is to be the 1st in the list 
		//insert it before all other nodes
		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else //otherwise insert after the previous node
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}
//************************************************************************
//deleteNode
//**************************************************************************
void NumberList::deleteNode(double num)
{
	listNode* nodePtr;               //to traverse the list 
	ListNode* previousNode;          //to point to the previous node

	//if the list is empty do nothing 
	if (!head)
		return;
	//determnd if the the first node is the one 
	if (head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		//initialize nodePtr to head of the list 
		nodePtr = head;

		//skip all nodes whose value memebr is 
		//not equal to num.
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		//if nodePtr is not at the end of the list,
		//link the previous node to the node after 
		//nodePtr, then delete nodePtr
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

//***********************************************************************
//~NumberList
//************************************************************************
NumberList::~NumberList()
{
	ListNode* nodePtr;    //To traverse the list 
	ListNode* nextNode;   //to point to the next node

	//position nodePtr at the head of the list 
	nodePtr = head;

	//while nodePtr is not at the end of the list....
	while (nodePtr != nullptr)
	{
		//save  a pointer to the next node
		nextNode = nodePtr->next;

		//delete the current node
		delete nodePtr;

		//position nodePtr at the next node.
		nodePtr = nextNode;
	}
}

#endif
