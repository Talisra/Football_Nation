#include "person.h"

Person::Person(const char* name, int age, const char* nationality)
{
	name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	this->age = age;
	nationality = new char[strlen(nationality) + 1];
	strcpy(this->nationality, nationality);
}

void Person::show() const
{

}

//ADD GETTERS AND SETTERS