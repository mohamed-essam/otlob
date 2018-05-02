#include"Order.h"

using seconds_t = std::chrono::seconds;


int Order::getId()
{
	return id; 
}
void Order::setId(int Id)
{
	id = Id; 
}
int Order::getUserid()
{
	return userId; 
}
void Order::setUserid(int Userid)
{
	userId = Userid;
}
int Order::getRestaurantid()
{
	return restaurantId; 
}
void Order::setRestaurantid(int Restaurantid)
{
	restaurantId = Restaurantid; 
}
int Order::getEmployeeid()
{
	return employeeId; 
}
void Order::setEmployeeid(int Employeeid)
{
	employeeId = Employeeid; 
}
float Order::getRating()
{
	return rating; 
}
void Order::setRating(float Rating)
{
	rating = Rating; 
}
long long Order::getTime()
{
	return time; 
}
void Order::setTime(long long Time)
{
	time = Time; 
}
vector<int> Order::getOrderitemsids()
{
	return orderItemsIds; 
}
void Order::setOrderitemsids(vector<int> Orderitemsids)
{
	orderItemsIds = Orderitemsids; 
}
float Order::getAmountoff()
{
	return amountOff; 
}
void Order::setAmountoff(float Amountoff)
{
	amountOff = Amountoff; 
}
bool Order::getIscancelled()
{
	return isCancelled; 
}
void Order::setIscancelled(bool Iscancelled)
{
	isCancelled = Iscancelled; 
}
Order Order::create(int id, int userId, int restaurantId, int employeeId, float rating, long long time, vector<int> orderItemsIds, float amountOff, bool isCancelled)
{
	Order order; 
	order.id = id; 
	order.userId = userId; 
	order.restaurantId = restaurantId; 
	order.employeeId = employeeId; 
	order.rating = rating; 
	order.time = time; 
	order.orderItemsIds = orderItemsIds; 
	order.amountOff = amountOff; 
	order.isCancelled = isCancelled; 
	return order;
}
void Order::cancel()
{
	isCancelled = true; 
}
long long Order::getTimeInSeconds()
{
	const auto now = std::chrono::system_clock::now();
	const auto epoch = now.time_since_epoch();
	const auto seconds = std::chrono::duration_cast<std::chrono::seconds>(epoch);
	return seconds.count();
}
bool Order::canCancel()
{
	long long now = getTimeInSeconds() ; 
	return ((now - time) < 601); 
}