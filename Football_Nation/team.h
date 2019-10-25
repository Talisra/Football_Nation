#ifndef __TEAM_H
#define __TEAM_H

#include <iostream>
#include "referee.h"
#include <random>
#include "NoSpaceException.h"
#include "NullPointerException.h"

using namespace std;
#pragma warning(disable:4290)

const int MIN_RANDOM = 0;
const int MAX_RANDOM_ATTACK = 40;

class Coach;
class Player;
class Manager;

const int LINEUP_SIZE = 5; // size of the team lineup 
const int BENCH_SIZE = 10; // size of the bench. MUST BE > 0;
const int COACH_SIZE = 4; // size of the coach array.  MUST BE > 0;

class Team 
{

public:

	Team(const char* name,
		Manager * manager = nullptr);

	Team(const char* name,
		Manager* manager,
		Coach** coaches,
		Player** lineup,
		Player** benchPlayers,
		int points);

	~Team();

	void setManager(Manager * manger); 
	void addPoints(int points); // a negative number can be delievered here, it will decrease the team's points.
	void addCoach(Coach * coach) throw (NoSpaceException, NullPointerException);
	void addPlayer(Player * player) throw (NoSpaceException);
	void removePlayer(Player* Player) throw (NullPointerException);
	void removeCoach(Coach* coach) throw (NullPointerException);
	void addToLineup(Player* player) throw (NoSpaceException, NullPointerException); //this will add player from the bench to the lineup. (will remove the other player from the bench).
	void removeFromLineup(Player* player) throw (NoSpaceException, NullPointerException); //this will remove the player from the lineup to the bench. NOTE: this function will not return a feedback if the index is already a nullptr
	Player** getLineup() const; //returns the array of lineup
	Player** getBench() const;
	Team operator+(int points) const; // add points to the team
	bool operator>=(const Team& otherTeam) const; //Team is bigger if team have more point
	friend ostream& operator<<(ostream& os, const Team& team);
	char* getName() const;
	int getLineupSize() const;
	void scoreGoal();
	int getPoints();
	Player* getGoalLeader() const;

private:
	bool fillBench(Player* player); //try to fill a player in the bench. returns true if there is a room, and false if the bench is currenty full. an outside function will extend the bench array.
	bool fillCoach(Coach* coach); //exactly like the bench filler but for coaches
	void alignLineup(int strating_index); //Function to align the lineup array to the left, after removing a player.
	void alignBench(int starting_index);
	char* name;
	Team(const Team& other);
	const Team& operator=(const Team& other) = delete;
	Manager* manager;
	Coach** coaches;
	Player** benchPlayers;
	Player** lineup;
	int points;

	int currentBenchSize;
	int coachesSize;
	int currentLineup;
};

#endif // !__TEAM_H
