#ifndef VARIATION_H
#define VARIATION_H

#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

class Variation {
private:
	int id;
	float price;
	string name;
	int menuItemId;
public:
	int getId();
	void setId(int);
	float getPrice();
	void setPrice(float);
	string getName();
	void setName(string);
	int getMenuitemid();
	void setMenuitemid(int);
	static Variation create(int id, float price, string name, int menuItemId);
	//void destroy();
	//ObjectsGetter::DeleteVaritation(V.getId());
};
#endif // !VARIATION_H