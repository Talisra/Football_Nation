#include "person.h"

//implement show and operator= in non abstract children

Person::Person(const char* name, int age, const char* nationality)
{
	setName(name);
	setAge(age);
	setNationality(nationality);
}

const Person& Person::operator=(const Person& other)
{
	setName(other.name);
	setAge(other.age);
	setNationality(other.nationality);

	return *this;
}

Person::Person(const Person& other)
{
	*this = other;
}

Person::~Person()
{
	delete []name;
	delete []nationality;
}


//void Person::show() const {}
//abstact class - implement in children

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



