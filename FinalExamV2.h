#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GradedActivityV2.h"

class FinalExam : public GradedActivity
{
private:
	int numQuestions;    //number of questions 
	double pointsEach;   //points for each question 
	int numMissed;       //Number of quesitons missed

public:
	//default constructor
	FinalExam()
	{
		numQuestions = 0; 
		pointsEach = 0.0;
		numMissed = 0;

	}
	//constructor 
	FinalExam(int questions, int missed)
	{
		set(questions, missed);
	}
	//mutator functions 
	void set(int, int);   //defined in FinalExam.cpp
	void adjustScore();   //defined in FinalExam.cpp

	//accessor functions 
	double getNumQuestions() const
	{
		return numQuestions;
	}
	double getPointsEach() const
	{
		return pointsEach;
	}
	int getMissed() const
	{
		return numMissed;

	}

};
#endif
