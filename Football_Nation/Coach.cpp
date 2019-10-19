#include "coach.h"

Coach::Coach(const char* name, int age, const char* nationality, Role type, Team * currentTeam) :
	Person(name, age, nationality)
{
	setType(type);
	setTeam(currentTeam);
}

Coach::Coach(const Coach& other):
	Person(other.name, other.age, other.nationality)
{
	setType(other.type);
	setTeam(other.currentTeam);
}

void Coach::show() const
{

}

Coach::~Coach() 
{
	delete[] currentTeam;
}

Role Coach::getType() const {return type; }
Team* Coach::getCurrentTeam() const {return currentTeam;}

void Coach::setType(Role type)
{
	this->type = type;
}

void Coach::setTeam(Team* team)
{
	if (currentTeam != team)
	{
		if (currentTeam != nullptr)
		//currentTeam->removeCoach(this);
		currentTeam = team;
		if (currentTeam != nullptr)
		{
			currentTeam->addCoach(this);  // add coach to team
		}
	}
}