#include "coach_player.h"

CoachPlayer::CoachPlayer(const char* name, int age = 30, const char* nationality, const Coach& c, const Player& p) :
	Person(name, age, nationality), Coach(c), Player(p)
{

}

void CoachPlayer::show()
{

}