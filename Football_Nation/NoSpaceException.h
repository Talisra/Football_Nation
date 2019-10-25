#ifndef __NO_SPACE_EXCEPTION_H
#define __NO_SPACE_EXCEPTION_H

#pragma warning(disable:4996)

#include <iostream>
using namespace std;

class NoSpaceException
{
protected:
	int index;
	char* structName;
public:
	NoSpaceException(const char* name, int index);
	virtual void show() const;
};

#endif // !__NO_SPACE_EXCEPTION_H