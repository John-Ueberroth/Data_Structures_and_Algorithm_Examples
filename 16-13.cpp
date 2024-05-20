//This program provides a simple demonstration of the 
//vector STL template
#include<iostream>
#include <vector>  //include the vector header
using namespace std;

int main()
{
	int count;  //loop counter

	//Define a vector object
	vector<int> vect;

	//use the size member function to get 
	//teh number of elements in the vector 
	cout << "vect starts with " << vect.size()
		<< " elements.\n";
	//use puse_back to push values into the vector
	for (count = 0; count < 10; count++)
		vect.push_back(count);
	//display the size of the vector now
	cout << "Now vect has " << vect.size()
		<< " elements. here they are: \n";
	// use the [] operator to display each element
	for (count = 0; count < vect.size(); count++)
		cout << vect[count] << " ";
	cout << endl;
	//use the pop_back member function 
	cout << "popping the values out of vect...\n";
	for (count = 0; count < 10; count++)
		vect.pop_back();
	//display the size of the vector now 
	cout << "Now vect has " << vect.size() << " elements.\n";
	return 0;

}