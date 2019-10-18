#ifndef __PERSON_H
#define __PERSON_H
#include <iostream>
const int NAME_SIZE = 30;
class Person
{
protected:
	char* name;//[NAME_SIZE];
	int age;
	char* nationality; //[NAME_SIZE] ;
	Person(const Person& other) = delete;
	virtual ~Person();

public:
	Person(const char* name, int age, const char* nationality);
	virtual void show() const = 0;
	//virtual const Person& operator=(const Person& other) = 0;

	char* getName() const;
	int getAge() const;
	char* getNationality() const;

	void setName(const char* newName);
	bool setAge(int newAge);
	void setNationality(const char* newNationality);
};

#endif //__PERSON_H
