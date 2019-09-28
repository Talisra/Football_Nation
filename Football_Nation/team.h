#ifndef __TEAM_H
#define __TEAM_H

#include<iostream>

class Coach;
class Player;
class Manager;

const int LINEUP_SIZE = 5; // size of the team lineup 
int INITIAL_BENCH_SIZE = 10; // size of initial size of the bench. it is unlimited but must have an actual value. MUST BE > 0;
int INITIAL_COACH_SIZE = 3; // size of initial size of the coach array. it is unlimited but must have an actual value. MUST BE > 0;

class Team 
{

public:
	enum Role { striker, defender, goalkeeper, midlefielder };

	Team(const char* name,
		Manager * manager = nullptr,
		Coach * coaches = nullptr,
		Player * lineup = nullptr,
		Player * benchPlayers = nullptr,
		int points=0);
	~Team();

	void setManager(Manager * manger);
	void addCoach(Coach * coach);
	void addPlayer(Player * player);
	Team operator+(int points) const;
	bool operator >=(const Team& otherTeam) const; //Team is bigger if team have more point

private:
	Team();
	char* name;
	Manager* manager;
	Coach** coaches;
	Player** benchPlayers;
	Player** lineup;
	int points;

	int currentBenchPlayers;
	int benchSize;

	int currentCoaches;
	int coachesSize;

	int currentLineup;
};

#endif // !__TEAM_H
