#include "Account.h"

Account :: Account(int n, Client* o)
{
	this->number = n;
	this->owner = o;
	this->interest_rate = 1.4;
	this->balance = 0;
}


Account :: Account(int n, Client* o, Client* p)
{
	this->number = n;
	this->owner = o;
	this->partner = p;
	this->interest_rate = 1.4;
	this->balance = 0;

}

Account :: Account(int n, Client* o, Client* p, double irate)
{
	this->number = n;
	this->owner = o;
	this->partner = p;
	this->interest_rate = irate;
	this->balance = 0;

}

Account::Account(int n, Client* o, double irate)
{
	this->number = n;
	this->owner = o;
	this->interest_rate = irate;
	this->balance = 0;
}

int Account :: get_number()
{
	return this->number;
}

double Account :: get_balance()
{
	return this->balance;
}

double Account :: get_interest_rate()
{
	return this->interest_rate;
}

Client* Account :: get_owner()
{
	return this->owner;
}

Client* Account :: get_partner()
{
	return this->partner;
}

bool Account :: can_with_draw(double x)
{
	if (this->balance >= x )
	{
		return true;
	}
	return false;
}

void Account :: deposit(double x)
{
	this->balance = this->balance + x;
}

bool Account :: with_draw(double x)
{
	if (this->can_with_draw(x) == true) 
	{
		this->balance = this->balance - x;

		return true;
	}
	return false;
}



void Account :: add_interest()
{
	double balance = this->balance;
	double irate = this->interest_rate;
	double deposit = (balance / 100) * irate;
	this->deposit(deposit);
}
