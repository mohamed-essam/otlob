#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include "Human.h"
//#include "Order.h"

using namespace std;

class Employee : public Human {
private:
	string vehicleNumber;
	vector<int> orderIds;
public:
	void setVehicleNumber(string);
	string getVehicleNumber();
	void addOrderId(int);
	vector<int> getOrderIds();
	static Employee create(string name, string phone, string birthdate, string address);
	//void destroy();
	//ObjectsGetter::DeleteEmployee(e.getId());
	bool canTakeOrder();
	//vector<Order> listOrders();
	//ObjectsGetter::listOrdersForEmployee(Employee e)
};
#endif // !EMPLOYEE_H