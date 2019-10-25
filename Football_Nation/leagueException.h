#include <iostream>

class LeagueException 
{
public:
	LeagueException(const char* reason):
		exceptionReason(reason){}

	virtual void show() const;

protected:
	const char* exceptionReason;
	
};
