#include "manager.h"

Manager::Manager(const char *name, int age, const char* nationality, int yearsOfExperience) : Person(name, age, nationality)
{
	this->yearsOfExperience = yearsOfExperience;
	this->currentTeam = nullptr;
}

void Manager::setTeam(Team* team)
{
	this->currentTeam = team;
}

ostream& operator<<(ostream& os, const Manager& manager)
{
	const char* teamName;
	if (manager.currentTeam == nullptr)
		teamName = "None";
	else
		teamName = manager.currentTeam->getName();
	os << "Name: " << manager.name << "," << "\tAge: " << manager.age << ", Nationality: " << manager.nationality << "\t\tYears of EXP: " << manager.yearsOfExperience
		<< ", Team: " << teamName << endl;
	return os;
}