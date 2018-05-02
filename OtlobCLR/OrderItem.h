#ifndef ORDER_ITEM_H
#define ORDER_ITEM_H

#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

class OrderItem {
private:
	int id;
	int variationId;
	int quantity;
public:
	int getId();
	void setId(int);
	int getVariationid();
	void setVariationid(int);
	int getQuantity();
	void setQuantity(int);
	static OrderItem create(int id, int variationId, int quantity);
};
#endif // !ORDER_ITEM_H