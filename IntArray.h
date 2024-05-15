//Specification file for the intArray class 
#ifndef INTARRAY_H
#define INTARRAY_H

class IntArray
{
private:
	int* aptr;                    //Pointer to array 
	int arraySize;                //Holds the array size 
	void subscriptError();        //Handles invalid subscript
public:
	IntArray(int);                //Constructor 
	IntArray(const IntArray&);    //copy constructor 
	~IntArray();                  //Destructor 

	int size() const
	{
		return arraySize;
	}
	int& operator[](const int&);  //overloaded [] operator 

};
#endif
