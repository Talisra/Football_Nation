#include "leagueException.h"

void OddNumberOfTeamsException::show() const
{
	std::cout << exceptionReason << ", League must have an even number of teams" << std::endl;
}

void NoRefferesException::show() const
{
	std::cout << exceptionReason << ", please add referees to the league" << std::endl;
}

void leagueException::show() const
{
	std::cout << exceptionReason << std::endl;
}
