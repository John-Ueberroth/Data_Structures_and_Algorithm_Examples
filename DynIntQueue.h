#ifndef DYNINTQUEUE_H
#define DYNINTQUEUE_H

class DynIntQueue
{
private:
	//structure for the queue nodes
	struct QueueNode
	{
		int value;         //value in  a node
		QueueNode* next;   //pointer to the next node
	};

	QueueNode* front;      //The front of the queue
	QueueNode* rear;       //The rear of the queue
	int numItems;          //Number of items in the queue
public:
	//constructor
	DynIntQueue();

	//destructor 
	~DynIntQueue();

	//Queue operations 
	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
};
#endif
