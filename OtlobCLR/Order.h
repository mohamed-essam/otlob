#ifndef ORDER_H
#define ORDER_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <chrono>
#include "OrderItem.h"
#include "Variation.h"
using namespace std;

class Order {
private:
	int id;
	int userId;
	int restaurantId;
	int employeeId;
	float rating;
	long long time;
	bool isCancelled;
	vector<int> orderItemsIds;
	float amountOff;
public:
	int getId();
	void setId(int);
	int getUserid();
	void setUserid(int);
	int getRestaurantid();
	void setRestaurantid(int);
	int getEmployeeid();
	void setEmployeeid(int);
	float getRating();
	void setRating(float);
	long long getTime();
	long long getTimeInSeconds();
	void setTime(long long);
	vector<int> getOrderitemsids();
	void setOrderitemsids(vector<int>);
	float getAmountoff();
	void setAmountoff(float);
	bool getIscancelled();
	void setIscancelled(bool);
	static Order create(int id, int userId, int restaurantId, int employeeId, float rating, long long time, vector<int> orderItemsIds, float amountOff, bool isCancelled);
	void cancel();
	//float getTotalAmount();
	// an2l l func. de fl mkan l call 
	//float ObjectsGetter::getTotalAmountOfOrder(Order o)
	bool canCancel();
	//vector<OrderItem> getItems();
	// hatt3aml fl form hnloob 3la l ids w n7tohom f list mn ObjectGetter. 
	//vector<OrderItem> ObjectsGetter::getOrderItems(Order o)
};
#endif // !ORDER_H