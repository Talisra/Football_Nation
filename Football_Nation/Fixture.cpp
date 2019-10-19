#include "fixture.h"

Fixture::Fixture(int gamesInFixture, int number, Match** matches):
	gamesInFixture(gamesInFixture), number(number), matches(matches)
{

}

ostream& operator<<(ostream& os, const Fixture& fixture)
{
	for (int i = 0; i < fixture.gamesInFixture; i++)
		os << *fixture.matches[i];
	return os;
}

