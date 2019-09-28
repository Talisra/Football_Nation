#include "team.h"

Team::Team(const char* name, Manager* manager = nullptr, Coach* coaches = nullptr, Player* lineup = nullptr, Player* benchPlayers = nullptr, int points = 0)
{
	Team();
	this->name = new char[sizeof(name) + 1];
	strcpy(this->name, name);
	this->manager = manager;
	this->coaches = new Coach*[INITIAL_COACH_SIZE];
	this->lineup = new Player*[LINEUP_SIZE];
	this->benchPlayers = new Player*[INITIAL_BENCH_SIZE];
}

void Team::addPlayer(Player* player)
{
	if (currentBenchPlayers >= benchSize)
	{
		benchSize *= 2;
		benchPlayers = new Player*[benchSize];
	}
	benchPlayers[currentBenchPlayers] = player;
}