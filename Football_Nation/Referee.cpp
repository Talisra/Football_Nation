#include "referee.h"

const int Referee::arr[] = {10, 30, 100, 300, 1000 };

Referee::Referee(const char* name, int age, const char* nationality, int rating = 0, int gamesPlayed = 0):
	Person(name,age,nationality)
{
	setGamesPlayed(gamesPlayed);
	setRating();
}

void Referee::show() const
{

}

const Referee& Referee::operator++()
{
	this->gamesPlayed++;
	return *this;
}

int Referee::getGamesPlayed() const { return gamesPlayed; }
int Referee::getRating() const { return rating; }


void Referee::setGamesPlayed(int games) 
{
	this->gamesPlayed = games;
}

void Referee::setRating()
{
	if (getGamesPlayed() >= arr[MAX_RATING_POSITION])
	{
		this->rating = 5;
		return;
	}

	int counter = 0;
	while ((getGamesPlayed() < arr[counter]))
	{
		counter++;
	}
	this->rating = counter;
}

//TODO - add to playmatch increase refferee matches,