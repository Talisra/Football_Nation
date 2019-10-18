#ifndef __COACHPLAYER_H
#define __COACHPLAYER_H
#include "coach.h"
#include "player.h"

class CoachPlayer : public Coach, public Player
{
public:
	CoachPlayer(const char* name, int age, const char* nationality, const Coach& c, const Player& p);
	void show();
};
#endif //__COACHPLAYER_H