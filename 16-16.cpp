//This program demonstrates the STL count algorithm
#include<iostream>
#include<vector>    //Needed to define the vector 
#include<algorithm> //needed for the count algorithm
using namespace std;

int main()
{
	//define a vector object
	vector <int> values;

	//define an iterator for the vector 
	vector<int> ::iterator iter;

	//Store some values in the vector
	values.push_back(1);
	values.push_back(2);
	values.push_back(2);
	values.push_back(3);
	values.push_back(3);
	values.push_back(3);

	//display the values in the vector 
	cout << "The values in the vector are: \n";
	for (iter = values.begin(); iter < values.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;

	//Display the count of each number 
	cout << "The number of 1s in the vector is ";
	cout << count(values.begin(), values.end(), 1) << endl;
	cout << "THe number of 2a in the vector is ";
	cout << count(values.begin(), values.end(), 2) << endl;
	cout << "The number of 3's in the vector is ";
	cout << count(values.begin(), values.end(), 3) << endl;
	return 0;
}