#ifndef CATEGORY_H
#define CATEGORY_H

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Category {
private:
	int id;
	string name;
public:
	Category() {};
	int getId();
	void setId(int id);
	string getName();
	void setName(string name);
	//vector<Restaurant> listRestaurants();
	//vector<Restaurant> ObjectsGetter::listRestaurantsByCategoryId(C.getId());
	~Category() {};
};
#endif // !CATEGORY_H