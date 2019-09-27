#include "referee.h"

Referee::Referee(const char* name, int age, const char* nationality, int rating = 0, int gamesPlayed = 0):
	Person(name,age,nationality)
{
	this->rating = rating;
	this->gamesPlayed = gamesPlayed;
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
	int arr[6] = {10, 50, 100, 300, 1000};
	int determineRating = getGamesPlayed();
	arr[6] = determineRating;
	//arr.sort();

	//switch

	//TODO
}