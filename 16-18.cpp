//A demonstration of the STL find algorithm
#include<iostream>
#include<vector>     //Needed to define the vector
#include<algorithm>  //needed for the find algorithm
using namespace std;

int main()
{
	//define a vector object
	vector<int> numbers;

	//define an iterator for the vector
	vector<int>::iterator iter;

	//store some numbers in the vector 
	for (int x = 0; x < 10; x++)
		numbers.push_back(x);

	//display the numbers in the vector
	cout << "The numbers in the vector are: \n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;

	//find the number 7 in the vector 
	iter = find(numbers.begin(), numbers.end(), 7);
	cout << *iter << endl;
	return 0;
}