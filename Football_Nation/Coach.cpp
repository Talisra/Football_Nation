#include "coach.h"

Coach::Coach(const char* name, int age, const char* nationality, Team::Role type = (Team::Role) 0, Team * currentTeam = nullptr) :
	Person(name, age, nationality)
{
	setType(type);
	setTeam(currentTeam);
}

void Coach::show() const
{

}

Coach::~Coach() 
{
	delete[] currentTeam;
}

Team::Role Coach::getType() const {return type; }
Team* Coach::getCurrentTeam() const {return currentTeam;}

void Coach::setType(Team::Role type)
{
	this->type = type;
}

void Coach::setTeam(Team* team) 
{
	if (currentTeam != team)
	{
		currentTeam = team;
		if (currentTeam != nullptr)
		{
			currentTeam->addCoach(this);  // add coach to team
		}
	}
}