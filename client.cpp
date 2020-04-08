#include "client.h"

int Client::objects_count = 0;

Client::Client(int c, string n)//konstruktor
{
	this->code = c;
	this->name = n;
	Client::objects_count += 1;
}



int Client::get_objects_count()
{
	return Client::objects_count;
}


int Client::get_code()
{
	return this->code;
}

string Client::get_name()
{
	return this->name;
}