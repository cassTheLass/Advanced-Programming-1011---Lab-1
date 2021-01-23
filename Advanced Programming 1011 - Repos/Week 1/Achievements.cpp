#include "Achievements.h"
#include <iostream>


//TITLE
std::string Achievements::GetTitle()										// Returns the title
{
	return title;
};

void Achievements::SetTitle(std::string setTitle)							// Sets the title
{
	title = setTitle;
};


//DESCRIPTION
std::string Achievements::GetDescription()									// Returns the description
{
	return description;
};

void Achievements::SetDescription(std::string getDescription)				// Sets the description
{
	description = getDescription;
};


//SCORE
int Achievements::GetScore()												// Returns the score
{
	return scoreValue;
};

void Achievements::SetScore(int setScore)									// Sets the score
{
	scoreValue = setScore;
};



