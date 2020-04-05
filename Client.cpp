#include "Client.h"

Client :: Client(int c, string n)
{
	this->code = c;
	this->name = n;
}

string Client :: get_name()
{

	return this->name;
}


int Client :: get_code()
{
	return this->code;
}

