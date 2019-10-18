#ifndef __TEAM_H
#define __TEAM_H

#include <iostream>
using namespace std;


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
		int points = 0);
	~Team();

	void setManager(Manager * manger); 
	void addCoach(Coach * coach);
	void addPlayer(Player * player);
	void removePlayer(int index); //index starts from 0 until LINEUP_SIZE-1. any index that is larger from LINEUP_SIZE-1 will be checked in the bench players.
	void addToLineup(int index); //this will add the indexed player from the bench to the lineup. (will remove the indexed player from the bench).
	void removeFromLineup(int index); //this will remove the player from the lineup to the bench.
	//NOTE: ^^ this function will not return a feedback if the index is already a nullptr
	Team operator+(int points) const; //TODO - might not be const 'cause it changes the class
	bool operator >=(const Team& otherTeam) const; //Team is bigger if team have more point

private:
	bool fillBench(Player* player); //try to fill a player in the bench. returns true if there is a room, and false if the bench is currenty full. an outside function will extend the bench array.
	bool fillCoach(Coach* coach); //exactly like the bench filler but for coaches
	char* name;
	Manager* manager;
	Coach** coaches;
	Player** benchPlayers;
	Player** lineup;
	int points;

	int benchSize;

	int coachesSize;

	int currentLineup;
};

#endif // !__TEAM_H
