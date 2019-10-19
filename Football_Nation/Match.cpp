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

void simulateAttack(Team* attackingTeam, Team* defendingTeam) 
{
	int attackingScore = 0;
	int defendingScore = 0;
	int goalKeepingScore = 0;

	for (int i = 0; i < LINEUP_SIZE; i++) 
	{
		Player attPlayer = *((*attackingTeam).getLineup)[i]; //TODO..I assume it gives lineup and I can access the player? also not good but will be fixed
		if (attPlayer.getRole == (Role)0)  //Striker
			attackingScore += (STRIKER_BONUS + attPlayer.getAttack());
		else 
		{
			attackingScore += attPlayer.getAttack();
		}

		Player defPlayer = *(defendingTeam->getLineup[i]);
		if (defPlayer.getRole == (Role) 2)   //role 3 goalkepper...
			goalKeepingScore += defPlayer.getGoalkeeping;
		else 
		{
			defendingScore += defPlayer.getDefence;
		}
	}

	for(int i=0 ; i < ATTACK_ROUNDS; i++)
		srand(time(NULL));
		int	random = rand() % 10;
		if (attackingScore + random > defendingScore + (goalKeepingScore * 1.2))
			cout << attackingTeam.getName << 'Scored a goal!' << endl;
			attackingTeam.getLineup[i]++;    //add a goal to a player from attacking team
			if (attackingTeam == this->homeTeam)
				this.result[0] += 1;
			else 
			{
				this.result[1] += 1;
			}

}

Team* Match::getWinnerTeam() const
{
	if (result[0] != result[1])
		result[0] > result[1] ? homeTeam : awayTeam;
	else
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

ostream& operator<<(ostream& os, const Match& match)
{
	os << "Home Team: " << match.getHomeTeam << " vs " << "Away Team: " << match.getAwayTeam << ",result is: " << match.getResult + endl;
	return os;
}