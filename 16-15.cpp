//A simple demonstration of STL algorithms
#include <iostream>
#include <vector>     //required for the vector type
#include <algorithm>  //required for stl algorithms
using namespace std;

int main()
{
	int count;   //loop counter

	//define a vector object
	vector<int> vect;

	//use push_back to push values into the vector
	for (count = 0; count < 10; count++)
		vect.push_back(count);

	//display the vector's elements
	cout << "The vector has " << vect.size()
		<< " elements. Here they are:\n";
	for (count = 0; count < vect.size(); count++)
		cout << vect[count] << " ";
	cout << endl;

	//Randomly shuffle the vector contents
	random_shuffle(vect.begin(), vect.end());

	//display the vector's elements 
	cout << "The elements have been shuffled:\n";
	for (count = 0; count < vect.size(); count++)
		cout << vect[count] << " ";
	cout << endl;

	//now search for an element with the value 7
	if (binary_search(vect.begin(), vect.end(), 7))
		cout << "The value 7 was found in the vector. \n";
	else
		cout << "The value 7 was not found in the vector.\n";
	return 0;
}