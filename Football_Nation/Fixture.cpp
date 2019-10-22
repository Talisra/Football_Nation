#include "fixture.h"

Fixture::Fixture(int gamesInFixture, int number, Match** matches) :
	gamesInFixture(gamesInFixture), number(number), matches(matches), hasPlayed(false)
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
	os << "Fixture #" << fixture.number << endl;
	for (int i = 0; i < fixture.gamesInFixture; i++)
	{
		os << *fixture.matches[i];
		if (fixture.hasPlayed) 
		{
			Match* match = fixture.matches[i];
			os << " || result:  " << match->getResult(0) << ":" << match->getResult(1)<< endl;
		}
	}
	return os;
}

