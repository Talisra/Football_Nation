#include "leagueException.h"

void oddNumberOfTeamsException::show() const
{
	std::cout << exceptionReason << ", League must have an even number of teams" << std::endl;
}

void noRefferesException::show() const
{
	std::cout << exceptionReason << ", please add referees to the league" << std::endl;
}

void leagueException::show() const
{
	std::cout << exceptionReason << std::endl;
}
