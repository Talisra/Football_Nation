#include <iostream>

class LeagueException 
{
public:
	LeagueException(char* reason):
		exceptionReason(reason){}

	virtual void show() const = 0;

protected:
	char* exceptionReason;
	
};

class OddNumberOfTeamsException : public LeagueException 
{
public:
	OddNumberOfTeamsException(char* reason) : LeagueException(reason) {}

	virtual void show() const;
};

class NoRefferesException : public LeagueException
{
public:
	NoRefferesException(char* reason) : LeagueException(reason){}
	virtual void show() const;
};