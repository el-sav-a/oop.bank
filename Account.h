#pragma once
#include "client.h"


using namespace std;

class Account
{

private:

	static int objects_acc_count ;
	static double stat_irate ;

	int number;
	double balance;
	double interest_rate;
	
	

	Client* owner;
	Client* partner;
	
public:

	Account(int n, Client* o, double irate);
	Account(int n, Client* o, Client* p, double irate);
	Account(int n, Client* o);
	Account(int n, Client* o, Client* p);
	~Account();



	static int get_objects_acc_count(); 
	static void set_stat_irate(double a);
	

	Client* get_owner();
	Client* get_partner();

	int get_number();
	double get_bal();
	double get_irate();
	bool can_draw(double d);
	bool with_draw(double d);
	void deposit(double in);
	void add_inter();


};