#include "person.h"


Person::Person(const char* name, int age, const char* nationality)
{
	try 
	{
		setName(name);
		setAge(age);
		setNationality(nationality);
	}

	catch (invalidAgeException& e) 
	{
		delete[]this->name;
		e.show();
		throw e;
	}
	catch (invalidNameException& e)
	{
		delete[]this->name;
		e.show();
		throw e;
	}
	catch (NullPointerException& e)
	{
		delete[]this->name;
		delete[]this->nationality;
		e.show();
		throw e;
	}

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

//Getters

char* Person::getName() const { return name; }
int Person::getAge() const { return age; }
char* Person::getNationality() const{ return nationality; }

//Setters

void Person::setName(const char* newName) throw (invalidNameException, NullPointerException)
{
	strcmp(newName, "") == 0 ? throw invalidNameException() : 0;

	delete []name;
	name = new char[strlen(newName) + 1];
	strcpy(name, newName);
}
bool Person::setAge(int newAge) throw (invalidAgeException)
{
	if (newAge < MIN_AGE || newAge > MAX_AGE)
	{
		throw invalidAgeException(newAge);
	}
	age = newAge;
	return true;
}
void Person::setNationality(const char* newNationality) throw (NullPointerException)
{
	newNationality == nullptr ? throw NullPointerException("Person::nationality") : 0;
	delete []nationality;
	nationality = new char[strlen(newNationality) + 1];
	strcpy(nationality, newNationality);
}

