#ifndef __REFEREE_H
#define __REFEREE_H

#include "person.h"

class Referee : public Person
{
private:

	int gamesPlayed;
	int rating;

public:
	Referee(const char* name, int age, const char* nationality,int rating, int gamesPlayed);
	void show() const;

	int getGamesPlayed() const;
	int getRating() const;

	void setGamesPlayed(int games);
	void setRating();

};

#endif //__REFEREE_H
