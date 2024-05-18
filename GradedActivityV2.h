#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

//GradedActivity class declaration 

class GradedActivity
{
protected:
	double score; //to hold the numeric score
public:
	//default constructor 
	GradedActivity()
	{
		score = 0.0;
	}
	//constructor 
	GradedActivity(double s)
	{
		score = s;
	}
	//Mutator function 
	void setScore(double s)
	{
		score = s;

	}
	//accessor function 
	double getScore() const
	{
		return score;
	}
	char getLetterGrade() const;
};
#endif
