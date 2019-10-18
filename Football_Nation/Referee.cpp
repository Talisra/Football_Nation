#include "referee.h"

Referee::Referee(const char* name, int age, const char* nationality, int rating = 0, int gamesPlayed = 0):
	Person(name,age,nationality)
{
	setGamesPlayed(gamesPlayed);
	setRating();
}

void Referee::show() const
{

}

int Referee::getGamesPlayed() const { return gamesPlayed; }
int Referee::getRating() const { return rating; }

void Referee::setGamesPlayed(int games) 
{
	this->gamesPlayed = games;
}

void Referee::setRating()
{
	int counter = 0;
	
	while ((getGamesPlayed() < ARR[counter]))
	{
		counter++;
	}

	this->rating = counter;
}