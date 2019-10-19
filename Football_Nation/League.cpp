#include "league.h"

League::League(const char* name, int numberOfTeams, Team** teams, int numberofreferees, Referee** referees, int numberOfFixtures) : numberOfTeams(numberOfTeams), teams(teams), numberOfReferees(numberofreferees),
referees(referees), numberOfFixtures(numberOfFixtures), fixtures(nullptr)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	playedFixtures = 0;
}

League::~League()
{

}

void League::setNumberOfReferees(int num)
{
	this->numberOfReferees = num;

}



void League::addTeam(Team* team)
{
	numberOfTeams++;
	Team** tempTeam = teams;
	delete[] teams;
	teams = new Team* [numberOfTeams];
	for (int i = 0; i < numberOfTeams - 1; i++)
	{
		teams[i] = tempTeam[i];
	}
	teams[numberOfTeams] = team;
}