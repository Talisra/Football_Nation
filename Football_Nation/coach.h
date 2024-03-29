#ifndef __COACH_H
#define __COACH_H

#include "person.h"
#include "role.h"
#include "team.h"

class Team;
class Coach : virtual public Person
{
public:
	
	Coach(const char * name,
		int age,
		const char* nationality,
		Role type = (Role) 0,
		Team* currentTeam = nullptr);
	Coach(const Coach& other);

	//virtual const Coach& operator=(const Coach& other) = delete;
	friend ostream& operator<<(ostream& os, const Coach& c);

	Role getType() const;
	Team* getCurrentTeam() const;

	void setType(Role type);
	void setTeam(Team* team);   

	

protected:
	Role type;
	Team* currentTeam;
};

#endif //__COACH_H