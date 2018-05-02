#ifndef USER_H
#define USER_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include "Human.h"
#include "Order.h"
//#include "ObjectsGetter.h"

using namespace std;

class User : public Human {
private:
	string creditcard;
	string email;
	string password;
	vector<int> orderIds;
public:
	void setCreditcard(string);
	string getCreditcard();
	void setEmail(string);
	string getEmail();
	void setPassword(string);
	string getPassword();
	void addOrderId(int);
	vector<int> getOrderIds();
	static User signUp(string email, string password, string creditCard, string name, string phone,	string birthdate, string address);
	/*static User login(string email, string password);
	// ObjectsGetter::GetUserByEmailAndPassword(U.getemail(), U.getpassword());
	vector<Order> listOrders();
	//vector<Order> ObjectsGetter::listOrdersOfUser(User u)
	// l objectgetter
	void Unregister();
	//ObjectsGetter::DeleteUser(U.getId()); */
};
#endif // !USER_H
