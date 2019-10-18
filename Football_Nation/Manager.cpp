#include "manager.h"

Manager::Manager(const char *name, int age, const char* nationality, int yearsOfExperience) : Person(name, age, nationality)
{
	this->yearsOfExperience = yearsOfExperience;
}

void Manager::setTeam(Team* team)
{
	this->currentTeam = team;
}