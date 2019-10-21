#include "match.h"
#include "player.h"

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Match::Match(Team* homeTeam, Team* awayTeam, Referee* referee) : homeTeam(homeTeam), awayTeam(awayTeam), referee(referee)
{
	playMatch();
}

void Match::playMatch()
{
	//each team has the option to score goals in their turn to attack
	simulateAttack(homeTeam,awayTeam);
	simulateAttack(awayTeam,homeTeam);
}

void Match::simulateAttack(Team* attackingTeam, Team* defendingTeam) 
{
	
	int attackingScore = 0;
	int defendingScore = 0;
	int goalKeepingScore = 0;

	for (int i = 0; i < LINEUP_SIZE; i++) 
	{
		Player* attPlayer = attackingTeam->getLineup()[i];
		attackingScore += attPlayer->getAttack() + (attPlayer->getRole() == (Role) 0 ? STRIKER_BONUS : 0);                 //player is a striker

		Player* defPlayer = defendingTeam->getLineup()[i];
		defendingScore += defPlayer->getDefence() + (defPlayer->getRole() == (Role) 1 ? DEFENDER_BONUS : 0);               //player is a defender
		goalKeepingScore += (defPlayer->getRole() == (Role) 2 ? defPlayer->getDefence() + defPlayer->getGoalkeeping() : 0);  //player is a goalkepper	
	}

	for (int i = 0; i < ATTACK_ROUNDS; i++)
	{
		srand(time(NULL));
		int	random = rand() % 22 + 2;
		if (attackingScore + random > defendingScore + goalKeepingScore) 
		{
			attackingTeam->scoreGoal();
			if (attackingTeam == this->homeTeam)
				this->result[0] += 1;
			else
			{
				this->result[1] += 1;
			}
		}
	}
}

Team* Match::getWinnerTeam() const
{
	if (result[0] != result[1])
		result[0] > result[1] ? homeTeam : awayTeam;
	return nullptr;
}


Team* Match::getHomeTeam() const
{
	return homeTeam;
}

Team* Match::getAwayTeam() const
{
	return awayTeam;
}

Referee* Match::getReferee() const
{
	return referee;
}

int* Match::getResult() const //TODO 
{
	return 0;
}

void Match::show() const
{

}

ostream& operator<<(ostream& os, const Match& match)
{
	/*os << "Home Team: " << match.getHomeTeam << " vs " << "Away Team: " << match.getAwayTeam << ",result is: " << match.getResult + endl;*/
	return os;
}