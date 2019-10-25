#include "PlayMatchException.h"

PlayMatchException::PlayMatchException(Team* team, const char* reason) : team(team)
{
	this->reason = new char[strlen(reason) + 1];
	strcpy(this->reason, reason);
}

void PlayMatchException::show() const
{
	cout << "Match cannot be played because Team " << team->getName() << " " << reason << endl;
}

Team* PlayMatchException::getTeam() const
{
	return team;
}

char* PlayMatchException::getReason() const
{
	return reason;
}