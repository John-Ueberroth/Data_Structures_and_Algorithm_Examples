#ifndef SUV_H
#define SUV_H
#include "Automobile.h"
#include<string>
using namespace std;

//The SUV class represents a SUV
class SUV : public Automobile
{
private:
	int passengers;
public:
	//default constructor 
	SUV() : Automobile()
	{
		passengers = 0;
	}

	//constructor #2
	SUV(string SUVMake, int SUVModel, int SUVMileage, double SUVPrice,
		int SUVPassengers) :
		Automobile(SUVMake, SUVModel, SUVMileage, SUVPrice)
	{
		passengers = SUVPassengers;
	}
	//accessor for passengers attribute 
	int getPassengers()
	{
		return passengers;
	}

};
#endif
