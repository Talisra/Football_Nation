#ifndef __PLAYER_H
#define __PLAYER_H
#include "person.h"
#include "team.h"
class Team;

class Player : virtual public Person
{

public:
	
	void show() const;
	double getRate();

	Player(const char * name, int age,
		const char* nationality,
		int attack, int defence,
		int goalkeeping, int goalScored = 0, int value=0,
		Team::Role role= (Team::Role)0, Team * currentTeam = nullptr);
	void setTeam(Team * team);
	Player operator++(int);
	bool operator >=(const Player& player) const; //Player is bigger if he scored more goles

	~Player();

protected:
	int atack;
	int defence;
	int goalkeeping;
	int goalScored;
	int value;
	Team::Role role;
	Team * currentTeam;

	Player(const Player& other);

};

#endif //__PLAYER_H