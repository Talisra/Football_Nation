#include "league.h"

League::League(const char* name, int numberOfTeams, Team** teams, int numberofreferees, Referee** referees) : numberOfTeams(numberOfTeams), teams(teams), numberOfReferees(numberofreferees),
referees(referees), fixtures(nullptr)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	playedFixtures = 0;
	numberOfFixtures = (numberOfTeams - 1) * 2;
}

League::~League()
{

}

void League::startSeason()
{
	for (int i = 0; i < numberOfFixtures; i++)    // i = overall fixtures to create
	{
		for (int j = 0; j < numberOfTeams/2; j++) 
		{
			Team* team1 = this->teams[(numberOfTeams -i +j)%numberOfTeams];
			Team* team2 = this->teams[(numberOfTeams -1 -i-j)%numberOfTeams];
			//TODO: fix algo....

			

		}

	}
}

const Fixture& League::playFixture()
{
	// TODO
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

void League::showMostActiveReferee() const
{

	//TODO : add possible tie?
	Referee* activeRef = referees[0];

	for (int i = 1; i < numberOfReferees; i++)
	{
		activeRef->getGamesPlayed() > referees[i]->getGamesPlayed()  ? 0 : activeRef = referees[i];
	}
	cout << activeRef << endl;
}

void League::showLeadingTeam() const
{
	//TODO : add possible tie?
	Team* leadingTeam = teams[0];

	for (int i = 1; i < numberOfTeams; i++)
	{
		leadingTeam->getPoints() > teams[i]->getPoints() ? 0 : leadingTeam = teams[i];
	}
	cout << leadingTeam << endl;
}

void League::showLosingTeam() const
{
	//TODO tie?
	Team* losingTeam = teams[0];

	for (int i = 1; i < numberOfTeams; i++)
	{
		losingTeam->getPoints() > teams[i]->getPoints() ? losingTeam = teams[i] : 0;
	}
	cout << losingTeam << endl;
}

void League::showLeadingScorer() const
{
}

bool League::isEnded()
{
	return numberOfFixtures == playedFixtures;
}
