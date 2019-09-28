#include "match.h"

Match::Match(Team* homeTeam, Team* awayTeam, Referee* referee) : homeTeam(homeTeam), awayTeam(awayTeam), referee(referee)
{
	playMatch();
}

void Match::playMatch()
{

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

int Match::getResult() const //TODO 
{
	int i = 100;
	return i;
}