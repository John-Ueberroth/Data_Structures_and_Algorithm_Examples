#ifndef TRUCK_H
#define TRUCK_H
#include "Automobile.h"
#include <string>
using namespace std;

//The truck class represents a truck 
class Truck : public Automobile
{
private:
	string driveType;
public:
	//default constructor 
	Truck() : Automobile()
	{
		driveType = " ";
	}
	//constructor #2
	Truck(string truckMake, int truckModel, int truckMileage,
		double truckPrice, string truckDriveType) :
		Automobile(truckMake, truckModel, truckMileage, truckPrice)
	{
		driveType = truckDriveType;
	}

	//Accessor for driveType attribute
	string getDriveType()
	{
		return driveType;
	}
};
#endif
