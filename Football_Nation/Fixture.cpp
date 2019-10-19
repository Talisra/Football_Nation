#include "fixture.h"

Fixture::Fixture(int number, Match* matches[] = nullptr):
	number(number), matches(matches)
{

}

ostream& Fixture::operator<<(ostream& os, const Fixture& fixture)
{
	for (Match match : matches)
		os << "Home Team: " + match.getHomeTeam + " vs " + "Away Team: " + match.getAwayTeam + ",result is: " + match.getResult + "\n";
	return os;
}


