#ifndef __COACH_H
#define __COACH_H
#include "person.h"
#include "team.h"

class Team;
class Coach : virtual public Person
{
public:
	
	Coach(const char * name,
		int age,
		const char* nationality,
		Team::Role type = (Team::Role) 0 ,
		Team* currentTeam = nullptr);
	~Coach();

	void show() const;
	Team::Role getType() const;
	Team* getCurrentTeam() const;

	void setType(Team::Role type);
	void setTeam(Team* team);   //should this be const? unsure

	

protected:
	Team::Role type;
	Team* currentTeam;
	Coach(const Coach& other) = delete;

};

#endif //__COACH_H