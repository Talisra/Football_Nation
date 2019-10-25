#ifndef __PLAY_MATCH_EXCEPTION_H
#define __PLAY_MATCH_EXCEPTION_H

#include "team.h"
#include <iostream>
using namespace std;

class PlayMatchException
{
protected:
	Team* team;
	char* reason;
public:
	PlayMatchException(Team* team, const char* reason);
	virtual void show() const;
	char* getReason() const;
	Team* getTeam() const;
};

#endif // !__PLAY_MATCH_EXCEPTION_H

