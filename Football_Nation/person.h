#ifndef __PERSON_H
#define __PERSON_H
#pragma warning(disable:4996)
#include <iostream>
using namespace std;

const int NAME_SIZE = 30;
class Person
{
protected:
	char* name;//[NAME_SIZE];
	int age;
	char* nationality; //[NAME_SIZE] ;
	Person(const Person& other);
	virtual ~Person();
	const Person& operator=(const Person& other);

public:
	Person(const char* name, int age, const char* nationality);

	//virtual char* defineRoles() = 0;
	//TODO think about this?

	char* getName() const;
	int getAge() const;
	char* getNationality() const;

	void setName(const char* newName);
	bool setAge(int newAge);
	void setNationality(const char* newNationality);
};

#endif //__PERSON_H
