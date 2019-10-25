#ifndef __NULL_POINTER_EXCEPTION_H
#define __NULL_POINTER_EXCEPTION_H

#pragma warning(disable:4996)

#include <iostream>
using namespace std;

class NullPointerException
{
protected:
	char* variable;
public:
	NullPointerException(const char* var);
	virtual void show() const;
};

#endif // !__NULL_POINTER_EXCEPTION_H
