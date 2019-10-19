#include "fixture.h"

Fixture::Fixture(int gamesInFixture, int number, Match** matches):
	gamesInFixture(gamesInFixture), number(number), matches(matches)
{

}

ostream& operator<<(ostream& os, const Fixture& fixture)
{

	for (Match match : fixture.matches)
		os << "Home Team: " + match.getHomeTeam + " vs " + "Away Team: " + match.getAwayTeam + ",result is: " + match.getResult + "\n";
	return os;
}

