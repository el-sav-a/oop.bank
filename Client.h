#pragma once
#include <string>


using namespace std;

class Client
{
private:

	int code;
	string name;
	

public:

	
	Client(int c, string p);

	int get_code();
	string get_name();
};
