#ifndef __MANAGER_H
#define __MANAGER_H
#include "Person.h"
#include "team.h"

class Team;

class Manager : public Person
{
	friend class Team;
private:
	int yearsOfExperience;
	Team * currentTeam;
	Manager(const Manager& other) = default;
	void setTeam(Team* team); // changing the team is only available from Team.

public:
	Manager(const char *name, int age, const char* nationality,int yearsOfExperience);
	friend ostream& operator<<(ostream& os, const Manager& manager);
	//~Manager();
};
#endif //__MANAGER_H
