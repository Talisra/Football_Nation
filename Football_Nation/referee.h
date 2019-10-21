#ifndef __REFEREE_H
#define __REFEREE_H

#include "person.h"

const int MAX_RATING_POSITION = 4;

class Referee : public Person
{
private:
	static const int arr[];
	int gamesPlayed;
	int rating;

public:
	Referee(const char* name, int age, const char* nationality,int rating, int gamesPlayed);
	void show() const;
	Referee(const Referee& other) = delete;

	int getGamesPlayed() const;
	int getRating() const;

	void setGamesPlayed(int games);
	void setRating();

};


#endif //__REFEREE_H
