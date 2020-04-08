#pragma once
#include "Client.h"
class Account
{
private:
	int number;
	double balance;
	double interest_rate;

	Client* owner;
	Client* partner;

public:
	Account(int n, Client* c);
	Account(int n, Client* c, Client* p);
	Account(int n, Client* c, Client* p, double irate);
	Account(int n, Client* c, double irate);

	Client* get_owner();

	int get_number();
	double get_balance();
	double get_interest_rate();

	
	Client* get_partner();

	bool can_with_draw(double x);
	void deposit(double x);
	bool with_draw(double x);
	void add_interest();

};
