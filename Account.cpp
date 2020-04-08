#include <iostream>
#include "Account.h"


int Account::objects_acc_count = 0;
double Account::stat_irate = 1.84;

Account::Account(int n, Client* o, double irate)
{
	this->number = n;
	this->owner = o;
	this->interest_rate = irate;
	this->balance = 0;

	Account::objects_acc_count += 1;
}

Account::Account(int n, Client* o, Client* p, double irate)
{
	this->number = n;
	this->owner = o;
	this->partner = p;
	this->interest_rate = irate;
	this->balance = 0;

	Account::objects_acc_count += 1;

}

Account::Account(int n, Client* o)
{
	this->number = n;
	this->owner = o;
	this->balance = 0;

	Account::objects_acc_count += 1;


}

Account::Account(int n, Client* o, Client* p)
{
	this->number = n;
	this->owner = o;
	this->partner = p;
	this->balance = 0;

	
	Account::objects_acc_count += 1;
	

}
/*double Account::set_stat_irate()
{
	return this->interest_rate = stat_irate;
}
*/

void Account::set_stat_irate(double a)
{
	Account::stat_irate = a;
}

int Account::get_objects_acc_count()
{
	return objects_acc_count;
}



Client* Account::get_owner()
{
	return this->owner;
}


Client* Account::get_partner()
{
	return this->partner;
}

int Account::get_number()
{
	return this->number;
}

double Account::get_bal()
{
	return this->balance;
}

double Account::get_irate()
{
	if (interest_rate == 0)
	{
		return stat_irate ;
	}
	return interest_rate;
}

bool Account::can_draw(double d)
{
	if (this->balance >= d)
	{
		return true;
	}
	return false;
}

bool Account::with_draw(double d)
{
	if (this->can_draw(d) == true)
	{
		this->balance = this->balance - d;

		return true;
	}
	return false;
}

void Account::deposit(double in)
{

	this->balance = this->balance + in;

}

void Account::add_inter()
{    //*/
	double balance = this->balance;
	double irate = this->interest_rate;
	double deposit = (balance / 100) * irate; //*/

	//double deposit = (this->balance / 100) * this->interest_rate ;
	this->deposit(deposit);
}

