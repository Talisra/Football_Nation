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

	Player operator++(int);
	bool operator >=(const Player& player) const; //Player is bigger if he scored more goles

	int getTotalStats() const;

	~Player();

	//getters
	int getAttack() const;
	int getDefence() const;
	int getGoalkeeping() const;
	int getGoalScored() const;
	int getValue() const;
	Team::Role getRole() const;
	Team* getTeam() const;
	//setters
	void setAttack(int atk);
	void setDefence(int def);
	void setGoalkeeping(int goalkeeping);
	void setValue(int val);
	void setRole(Team::Role role);
	void setTeam(Team* team);

protected:
	int attack;
	int defence;
	int goalkeeping;
	int goalScored;
	int value;
	Team::Role role;
	Team* currentTeam;

	Player(const Player& other);

};

#endif //__PLAYER_H