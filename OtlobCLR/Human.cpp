#include"Human.h"

using namespace std;

void Human::setId(int ID)
{
	id = ID; 
}
int Human::getId()
{
	return id; 
}
void Human::setName(string Name)
{
	name = Name; 
}
string Human::getName()
{
	return name;
}
void Human::setPhone(string Phone)
{
	phone = Phone; 
}
string Human::getPhone()
{
	return phone;
}
void Human::setBirthdate(string Birthdate)
{
	birthdate = Birthdate; 
}
string Human::getBirthdate()
{
	return birthdate;
}
void Human::setAddress(string Address)
{
	address = Address;
}
string Human::getAddress()
{
	return address;
}