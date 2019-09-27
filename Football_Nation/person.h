#ifndef __PERSON_H
#define __PERSON_H
#include <iostream>
//const int NAME_SIZE = 30;
class Person
{
protected:
	char* name;//[NAME_SIZE];
	int age;
	char* nationality; //[NAME_SIZE] ;
	Person(const Person& other) = delete;
	const Person& operator=(const Person& other) = delete;
	~Person();

public:
	Person(const char * name, int age, const char* nationality);
	void show() const;

	char* getName() const;
	int getAge() const;
	char* getNationality() const;

	void setName(const char* newName);
	bool setAge(int newAge);
	void setNationality(const char* newNationality);
};

#endif //__PERSON_H
