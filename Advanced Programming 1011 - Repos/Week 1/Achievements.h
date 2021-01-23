#pragma once
#include <iostream>


class Achievements
{
private:
	std::string title;
	std::string description;
	int scoreValue;

public:

	std::string GetTitle();												// Get Title
	void SetTitle(std::string setTitle);								// Set Title

	std::string GetDescription();										// Get Description
	void SetDescription(std::string getDescription);					// Set Description

	int GetScore();														// Get Score
	void SetScore(int setScore);										// Set Score
};