#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H
#include "PassFailActivity.h"

class PassFailExam : public PassFailActivity
{
private:
	int numQuestions;  //Number of questions 
	double pointsEach; //points for each question
	int numMissed;     //Number of quesitons missed
public:
	//default constructor 
	PassFailExam() : PassFailActivity()
	{
		numQuestions = 0;  
		pointsEach = 0.0;
		numMissed = 0;
	}
	//constructor 
	PassFailExam(int questions, int missed, double mps) :
		PassFailActivity(mps)
	{
		set(questions, missed);
	}
	//mutator function 
	void set(int, int);  //defined in PassFailExam.cpp

	//accessor functions 
	double getNumQuestions() const
	{
		return numQuestions;
	}
	double getPointsEach() const
	{
		return pointsEach;
	}
	int getNumMissed() const
	{
		return numMissed;
	}

};
#endif
