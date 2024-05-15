#ifndef BUDGET_H
#define BUDGET_H
#include "Auxil.h"

//Budget class declaration 
class Budget
{
private: 
	static double corpBudget;    //Static member variable 
	double divisionBudget;       //Instance member variable
public: 
	Budget()
	{
		divisionBudget = 0;
	}
	void addBudget(double b)
	{
		divisionBudget += b;
		corpBudget += b;
	}
	double getDivisionBudget() const
	{
		return divisionBudget;

	}
	double getCorpBudget() const
	{
		return corpBudget;
	}
	//static member function 
	static void mainOffice(double);

	//Friend function 
	friend void AuxillaryOffice::addBudget(double, Budget&);
};
#endif
