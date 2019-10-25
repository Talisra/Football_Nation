#include <iostream>

class leagueException 
{
public:
	leagueException(char* reason):
		exceptionReason(reason){}

	virtual void show() const = 0;

protected:
	char* exceptionReason;
	
};

class oddNumberOfTeamsException : public leagueException 
{
public:
	oddNumberOfTeamsException(char* reason) : leagueException(reason) {}

	virtual void show() const;
};

class noRefferesException : public leagueException
{
public:
	noRefferesException(char* reason) : leagueException(reason){}
	virtual void show() const;
};