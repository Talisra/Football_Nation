#include "NullPointerException.h"

NullPointerException::NullPointerException(const char* var)
{
	variable = new char[strlen(var) + 1];
	strcpy(variable, var);
}

void NullPointerException::show() const
{
	cout << "The variable " << variable << " cannot be nullptr!" << endl;
}