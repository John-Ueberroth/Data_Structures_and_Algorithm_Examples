//This program demonstates a function that returns
//a pointer
#include<iostream>
#include<cstdlib> //for rand and srand
#include<ctime>   //for the time function 
using namespace std;

//function prototype 
int* getRandomNumbers(int);

int main()
{
	int* numbers = nullptr;  //to point to the numbers 

	//get an array of five random numbers 
	numbers = getRandomNumbers(5);

	//display the numbers 
	for (int count = 0; count < 5; count++)
	{
		cout << numbers[count] << endl;
	}

	//free the memory 
	delete[] numbers;
	numbers = 0;
	return 0;
}

//**********************************************************************
//the getRandomNumbers function returns a pointer 
//to an array of random integers. The parameter 
//indicates the number of numbers requested
//***********************************************************************

int* getRandomNumbers(int num)
{
	int* arr = nullptr;  //array to hold the numbers

	//return a null pointer if num is zero or negative
	if (num <= 0)
		return nullptr;

	//dynamically allocate the array 
	arr = new int[num];

	//seed the random number generator by passing 
	//the return value of time (0) to srand
	srand(time(0));

	//populate the array with random numbers 
	for (int count = 0; count < num; count++)
		arr[count] = rand();

	//return a pointer to the array
	return arr;

}