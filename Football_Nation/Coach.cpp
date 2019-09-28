#include "coach.h"

Coach::Coach(const char* name, int age, const char* nationality, Team::Role type = (Team::Role) 0, Team * currentTeam = nullptr) :
	Person(name, age, nationality)
{
	this->type = type;
	this->currentTeam = currentTeam;
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

void setType(Team::Role type);
void setTeam(Team* team);   //sh