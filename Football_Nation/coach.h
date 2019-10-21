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
	~Coach();

	virtual const Coach& operator=(const Coach& other) = delete;
	friend ostream& operator<<(ostream& os, const Coach& c);

	Role getType() const;
	Team* getCurrentTeam() const;

	void setType(Role type);
	void setTeam(Team* team);   //should this be const? unsure. should this be bool?

	

protected:
	Role type;
	Team* currentTeam;
	Coach(const Coach& other);

};

#endif //__COACH_H