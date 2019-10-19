#ifndef __MATCH_H
#define __MATCH_H
#include "team.h"
#include "referee.h"

const int NUM_OF_RESULTS = 2 ;
class Match
{

private:

	Team* homeTeam;
	Team* awayTeam;
	int result[NUM_OF_RESULTS]; // index 0 = home result, index 1 = away result.
	Referee* referee;
	Match(const Match& other) = default;

public:
	Match(Team * homeTeam, Team * awayTeam, Referee * referee);//Inside the constructor need to play Match random score and assign also randommly assign goal to player and score to winning team. 
	void playMatch();
	~Match();
	void show() const;
	Team* getWinnerTeam() const; //returns the winner team. If match has ended with a tie, returns nullptr
	Team* getHomeTeam() const;
	Team* getAwayTeam() const;
	Referee* getReferee() const;
	int getResult() const; //TODO
	friend ostream& operator<<(ostream& os, const Match& fixture);

};

#endif // !__MATCH_H

