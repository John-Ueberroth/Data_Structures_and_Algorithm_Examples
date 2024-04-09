//This program gets a series of test scores and calculates the
//average of the scores with the lowest score dropped.
#include<iostream>
#include<iomanip>
using namespace std;

//function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int SIZE = 4;              //array size 
	double testScores[SIZE],         //array of test scores 
		total,                       //total of the scores 
		lowestScore,                 //lowest test score 
		average;

	//Set up numeric output formatting 
	cout << fixed << showpoint << setprecision(1);

	//get the test scores from the user 
	getTestScores(testScores, SIZE);

	//get the total of the test scores
	total = getTotal(testScores, SIZE);

	//get the lowest test score 
	lowestScore = getLowest(testScores, SIZE);

	//Subtract the lowest score from the total 
	total -= lowestScore;

	//calculate the average. divide by 3 because 
	//the lowest test score was dropped 
	average = total/(SIZE - 1);

	//display the average
	cout << "The average with the lowest score "
		<< "dropped is " << average << ".\n";

	return 0;
}

//********************************************************************
//The getTestScores function accepts an array and its size as arguments
//It prompts the user to enter the test scores, wich are stored in the
//array.
//*********************************************************************
void getTestScores(double scores[], int size)
{
	//loop counter 
	int index;

	//get each test score 
	for (index = 0; index <= size - 1; index++)
	{
		cout << "Enter test score number "
			<< (index + 1) << ": ";
		cin >> scores[index];
	}
}

//************************************************************************
//The getTotal function accepts a double array and its size as arguments
//The sum of the array's elements is returned as a double 
//************************************************************************

double getTotal(const double numbers[], int size)
{
	double total = 0; //accumulator 
	
	//add each elemtent to total 
	for (int count = 0; count < size; count++)
		total += numbers[count];

	return total;

}

//**********************************************************************
//the getLowest function accepts a double array and its size as arguments
//the lowest value in the array is returned as a double 
//***********************************************************************
double getLowest(const double numbers[], int size)
{
	double lowest; //to hold the lowest valaue 
	
	//get the first arrays first element 
	lowest = numbers[0];

	//step through the rest of the array. When a value less than
	//the lowest is found, assign it to lowest
	for (int count = 1; count < size;count++)
	{
		if (numbers[count] < lowest)
			lowest = numbers[count];
	}

	//return the lowest value 
	return lowest;

}
