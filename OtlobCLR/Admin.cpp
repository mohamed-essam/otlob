#include"Admin.h"

using namespace std;

Admin::Admin(const Admin &a) {

}

void Admin::setEmail(string Email)
{
	email = Email;
}
string Admin::getEmail()
{
	return email; 
}
void Admin::setPassword(string Password)
{
	password = Password; 
}
string Admin::getPassword()
{
	return password; 
}