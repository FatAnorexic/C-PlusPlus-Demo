#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

class GradedActivity
{
protected:
	double score;

public:
	GradedActivity() { score = 0.0; }

	GradedActivity(double s) { score = s; }

	void setScore(double s) { score = s; }

	double getScore() const { return score; }

	virtual char getLetterGrade() const;
};
#endif // !GRADEDACTIVITY_H

