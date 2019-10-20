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
	Referee** temp = new Referee*[num];
	for (int i = 0; i < numberOfReferees; i++)
	{
		temp[i] = referees[i];
		if (i == num-1)
			break;
	}
	delete[] referees;
	referees = temp;
	numberOfReferees = num;
}

void League::addReferee(Referee* referee)
{
	for (int i = 0; i < numberOfReferees; i++)
	{
		if (referees[i] == nullptr)
		{
			referees[i] = referee;
			return;
		}
	}
}

void League::addTeam(Team* team)
{
	Team** tempTeam = new Team*[++numberOfTeams];
	for (int i = 0; i < numberOfTeams - 1; i++)
	{
		tempTeam[i] = teams[i];
	}
	delete[] teams;
	teams = tempTeam;
}
