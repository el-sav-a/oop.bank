#include "Bank.h"

using namespace std;

Bank::Bank(int c, int acc)
{
	this->clients = new Client * [c];
	this->max_clients_count = c;
	this->clients_count = 0;

	this->accounts = new Account* [acc];
	this->max_accounts_count = acc;
	this->account_count = 0;

	
}

Bank::~Bank()
{
	delete[]clients;
	delete[]accounts;
	this->clients = nullptr;
	this->accounts = nullptr;
	this->clients_count = 0;
	this->account_count = 0;
	this->max_clients_count = 0;
	this->max_accounts_count = 0;
}

Client* Bank::get_client(int c)
{
	for (int i = 0; i < this->clients_count; i++)
	{
		if (this->clients[i]->get_code() == c)

			return this->clients[i];
	}
	return nullptr;
}

Account* Bank::get_account(int n)
{
	for (int i = 0; i < this->account_count; i++)
	{
		if (this->accounts[i]->get_number() == n)

			return this->accounts[i];
	}
	return nullptr;
}

Client* Bank ::create_client(int c, string n)
{
	Client* n_client = new Client(c, n);
	this->clients[this->clients_count] = n_client;
	this->clients_count++;

	return n_client;
}
Account* Bank::create_account(int n, Client* c)
{
	Account* n_account = new Account(n, c);
	this->accounts[this->account_count] = n_account;
	this->account_count++;

	return n_account;
}
Account* Bank::create_account(int n, Client* c, double irate)
{
	Account* n_account = new Account(n, c, irate);
	this->accounts[this->account_count] = n_account;
	this->account_count++;

	return n_account;
}
Account* Bank::create_account(int n, Client* c, Client* p)
{
	if (this->account_count != 0)
	{
		Account* account = new Account(n, c, p);
		this->accounts[this->account_count] = account;
		this->account_count++;

		return account;
	}
	return nullptr;
}
Account* Bank::create_account(int n, Client* c, Client* p, double irate)
{
	if (this->account_count != 0)
	{
		Account* account = new Account(n, c, p, irate);
		this->accounts[this->account_count] = account;
		this->account_count++;

		return account;
	}
	return nullptr;
}

void Bank::add_interest()
{
	for (int i = 0; i < this->account_count; i++)
	{
		double balance = this->accounts[i]->get_bal();
		double irate = this->accounts[i]->get_irate();
		double deposit = (balance / 100) * irate;
		this->accounts[i]->deposit(deposit);
	}
}