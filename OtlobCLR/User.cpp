#include"User.h"

void User::setCreditcard(string Creditcard)
{
	creditcard = Creditcard; 
}
string User::getCreditcard()
{
	return creditcard; 
}

void User::setEmail(string Email)
{
	email = Email;
}
string User::getEmail()
{
	return email;
}

void User::setPassword(string Password)
{
	password = Password;
}
string User::getPassword()
{
	return password;
}

void User::addOrderId(int id)
{
	orderIds.push_back(id);
}
vector<int> User::getOrderIds()
{
	return orderIds; 
}
User User::signUp(string email, string password, string creditCard, string name, string phone, string birthdate, string address)
{
	User user ;
	user.setEmail(email); 
	user.setPassword(password);
	user.setCreditcard(creditCard);
	user.setName(name); 
	user.setPhone(phone);
	user.setBirthdate(birthdate);
	user.setAddress(address);
	return user; 
}