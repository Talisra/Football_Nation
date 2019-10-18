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
	int arr[6] = {3, 10, 50, 100, 300, 1000};
	int determineRating = getGamesPlayed();
	int counter = 0;

	while (determineRating >= arr[counter]) 
	{
		counter = counter + 1;
	}

	this->rating = rating;
}