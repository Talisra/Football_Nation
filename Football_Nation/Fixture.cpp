#include "fixture.h"

Fixture::Fixture(int gamesInFixture, int number, Match** matches):
	gamesInFixture(gamesInFixture), number(number), matches(matches)
{

}

int Fixture::getGamesInFixture() const
{
	return gamesInFixture;
}

int Fixture::getFixtureNumber() const
{
	return number;
}

Match** Fixture::getMatchesInFixture()
{
	return matches;
}

ostream& operator<<(ostream& os, const Fixture& fixture)
{
	for (int i = 0; i < fixture.gamesInFixture; i++)
		os << *fixture.matches[i];
	return os;
}

