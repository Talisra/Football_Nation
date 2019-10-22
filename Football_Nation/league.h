#ifndef __LEAGUE_H
#define __LEAGUE_H

#pragma warning(disable:4996)

#include "team.h"
#include "referee.h"
#include "fixture.h"

class Team;
class Referee;
class Fixture;

class League
{

private:
	char* name;
	int numberOfTeams;
	int numberOfReferees;
	Team** teams;
	Team** rotationTeams;         //to rotate while keeping the original team order in teams
	Referee** referees;
	int numberOfFixtures;
	int playedFixtures;
	Fixture** fixtures;

public:
	League(const char* name, int numberOfTeams,
		Team** teams = nullptr, int numberofreferees = 0,
		Referee** referees = nullptr); //in the constructor, number of teams must be the size of team array!

	virtual ~League();
	void addTeam(Team * team);
	void setNumberOfReferees(int numberOfreferees); //changes the number of referees in the league. any leftover referees will be eliminated from the league.
	void addReferee(Referee* referee); //add a referee only if there is a room in the array.
	void startSeason();
	bool playFixture();
	void showLeadingTeam() const;
	void showLosingTeam() const;
	void showLeadingScorer() const;
	void showMostActiveReferee() const;
	bool isEnded();
	void rotate();
	friend ostream& operator<<(ostream& os, const League& league);
};
#endif // !__LEAGUE_H

