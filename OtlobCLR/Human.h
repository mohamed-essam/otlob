#ifndef HUMAN_H
#define HUMAN_H

#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

class Human {
private:
	int id;
	string name;
	string phone;
	string birthdate;
	string address;

public:
	void setId(int);
	int getId();
	void setName(string);
	string getName();
	void setPhone(string);
	string getPhone();
	void setBirthdate(string);
	string getBirthdate();
	void setAddress(string);
	string getAddress();
};
#endif // !HUMAN_H