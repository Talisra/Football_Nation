#include "person.h"

Person::Person(const char* name, int age=17, const char* nationality)
{
	this->name = new char[strlen(name) + 1];
	this->nationality = new char[strlen(nationality) + 1];
	strcpy(this->name, name);
	this->age = age;
	strcpy(this->nationality, nationality);
}

Person::~Person() 
{
	delete []name;
	delete []nationality;
}

void Person::show() const
{

}

//Getters

char* Person::getName() const { return name; }
int Person::getAge() const { return age; }
char* Person::getNationality() const{ return nationality; }

//Setters

void Person::setName(const char* newName) 
{
	delete []name;
	name = new char[strlen(newName) + 1];
	strcpy(name, newName);
}
bool Person::setAge(int newAge)
{
	if (newAge < 17 || newAge > 75)
		return false;
	age = newAge;
	return true;
}
void Person::setNationality(const char* newNationality)
{
	delete []nationality;
	nationality = new char[strlen(newNationality) + 1];
	strcpy(nationality, newNationality);
}



