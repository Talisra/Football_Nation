#include "NoSpaceException.h"

NoSpaceException::NoSpaceException(const char* name, int index) : index(index)
{
	structName = new char[strlen(name) + 1];
	strcpy(structName, name);
}

void NoSpaceException::show() const
{
	cout << "There is no space in index #" << index << " at " << structName << endl;
}