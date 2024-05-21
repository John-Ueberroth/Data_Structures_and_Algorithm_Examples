//Specification file for the IntQueue class
#ifndef INTQUEUE_H
#define INTQUEUE_H

class IntQueue
{
private:
	int* queueArray;           //Points to the queue array
	int queueSize;             //The queue size 
	int front;                 //Subscript of the queue front
	int rear;                  //subscript of the queue rear
	int numItems;              //number of items in the queue
public:
	//constructor 
	IntQueue(int);

	//copy constructor 
	IntQueue(const IntQueue&);

	//Destructor 
	~IntQueue();

	//Queue operations 
	void enqueue(int);
	void dequeue(int&);
	bool isEmpty() const;
	bool isFull() const;
	void clear();
};
#endif
