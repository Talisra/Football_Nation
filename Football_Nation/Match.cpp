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
	return 0;
}

ostream& operator<<(ostream& os, const Match& match)
{
	os << "Home Team: " + match.getHomeTeam + " vs " + "Away Team: " + match.getAwayTeam + ",result is: " + match.getResult + endl;
	return os;
}