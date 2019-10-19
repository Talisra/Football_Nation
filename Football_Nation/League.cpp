#include "league.h"

League::League(const char* name, int numberOfTeams, Team** teams, int numberofreferees, Referee** referees, int numberOfFixtures) : numberOfTeams(numberOfTeams), teams(teams), numberOfReferees(numberofreferees),
referees(referees), numberOfFixtures(numberOfFixtures), fixtures(nullptr)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	playedFixtures = 0;
}

void League::addTeam(Team* team)
{
	
}