#ifndef __REFEREE_H
#define __REFEREE_H

#include "person.h"

class Referee : public Person
{
private:
	const static int ARR[6];
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
const static int ARR[6] = { 3, 10, 50, 100, 300, 1000 };

#endif //__REFEREE_H
