#ifndef ADMIN_H
#define ADMIN_H

#include <cstring>
#include <cstdlib>
#include <string>
#include "Human.h"

using namespace std;

class Admin : public Human {
private:
	string email;
	string password;
public:
	Admin() {};
	Admin(const Admin &a);
	void setEmail(string);
	string getEmail();
	void setPassword(string);
	string getPassword();
	//static Admin login(string email, string password);
	//ObjectsGetter::GetAdminByEmailAndPassword(email, password); 
};
#endif // !ADMIN_H