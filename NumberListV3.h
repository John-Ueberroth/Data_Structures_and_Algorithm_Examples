#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
private:
	//declare a structure for the list 
	struct ListNode
	{
		double value;
		struct ListNode* next;

	};

	ListNode* head;        //List head pointer

	//private member functions 
	int countNodes(ListNode*) const;
	void showReverse(ListNode*) const;

public:
	//constructor
	NumberList()
	{
		head = nullptr;
	}
	//destructor 
	~NumberList();

	//Linked List operations
	void appendNode(double);
	void insertNode(double);
	void deleteNode(double);
	void displayList() const;
	int NumNodes() const
	{
		return countNodes(head);
	}
	void displayBackwards() const
	{
		showReverse(head);
	}
};
//***********************************************************************
//countNodes
//***********************************************************************
int NumberList::countNodes(ListNode* nodePtr) const
{
	if (nodePtr != nullptr)
		return 1 + countNodes(nodePtr->next);
	else
		return 0;
}
//************************************************************************
//showReverse
//************************************************************************
void NumberList::showReverse(listNode* nodePtr) const
{
	if (nodePtr != nullptr)
	{
		showReverse(nodePtr->next);
		cout << nodePtr->value << " ";
	}
}

#endif
