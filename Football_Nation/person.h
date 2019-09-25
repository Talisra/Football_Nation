#ifndef __PERSON_H
#define __PERSON_H
#include <iostream>
const int NAME_SIZE = 30;
class Person
{
protected:
	char name[NAME_SIZE];
	int age;
	char nationality[NAME_SIZE];
	Person(const Person& other);
public:
	Person(const char * name, int age, const char* nationality);
	void show() const;

};

#endif //__PERSON_H
