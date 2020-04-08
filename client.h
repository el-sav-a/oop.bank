#pragma once
#include <string>

using namespace std;

class Client
{

private:

	static int objects_count;
	int code;
	string name;

public:

	static int get_objects_count();

	Client(int c, string n);
	

	int get_code();
	string get_name();

};