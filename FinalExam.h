#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "GreadedActivity.h"

class FinalExam : public GradedActivity
{
private:
	int numQuestions;     //number of questions 
	double pointsEach;    //points for each question 
	int numMissed;        //Number of questions missed

public:
	//default constructor 
	FinalExam()
	{
		numQuestions = 0; 
		pointsEach = 0.0;
		numMissed = 0;
	}
	//constructor 
	FinalExam (int questions, int missed)
	{
		set(questions, missed);
	}
	//mutator function 
	void set(int, int);    //defined in FianlExam.cpp
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
