//Specification fule for the IntegerList class
#ifndef INTEGERLIST_H
#define INTEGERLIST_H

class IntegerList
{
private:
	int* list;           //pointer to the array 
	int numElements;     //Number of elements
	bool isValid(int) const;   //Validates subscripts
public: 
	IntegerList(int);    //constructor
	~IntegerList();      //destructor
	void setElement(int, int);  //Sets an element to value 
	int getElement(int);  //retruns an element

};
#endif
