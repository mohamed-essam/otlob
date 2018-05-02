#include"Employee.h"

using namespace std; 

void Employee::setVehicleNumber(string VehicleNumber)
{
	vehicleNumber = VehicleNumber;
}
string Employee::getVehicleNumber()
{
	return vehicleNumber;
}
void Employee::addOrderId(int Id)
{
	orderIds.push_back(Id);
}
vector<int> Employee::getOrderIds()
{
	return orderIds; 
}
Employee Employee::create(string name, string phone, string birthdate, string address)
{
	Employee employee; 
	employee.setName(name); 
	employee.setPhone(phone);
	employee.setBirthdate(birthdate);
	employee.setAddress(address);
	return employee;
}
bool Employee::canTakeOrder()
{
	return (orderIds.size() < 3);
}