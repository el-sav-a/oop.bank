#pragma once
#include "Client.h"
#include "Account.h"


class Bank
{
private:

	Client** clients;

	int clients_count;
	int max_clients_count;

	Account** accounts;

	int account_count;
	int max_accounts_count;

public:

	Bank(int c, int a);
	~Bank();

	Client* get_client(int c);
	Account* get_account(int n);

	Client* create_client(int c, string n);
	Account* create_account(int n, Client* c);
	Account* create_account(int n, Client* c, double irate);
	Account* create_account(int n, Client* c, Client* p);
	Account* create_account(int n, Client* c, Client* p, double irate);

	void add_interest();
};
