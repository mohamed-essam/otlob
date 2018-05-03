#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class MenuItemM {
private:
	int id;
	int quantity;
	string name;
	string picturePath;
	string description;
	vector<int> variationsIds;
public:
	int getId();
	void setId(int id);
	int getQuantity();
	void setQuantity(int quantity);
	string getName();
	void setName(string name);
	string getPicturepath();
	void setPicturepath(string picturePath);
	string getDescription();
	void setDescription(string description);
	vector<int> getVariationsids();
	void setVariationsids(vector<int> variationsids);
	static MenuItemM create(int id, int quantity, string name, string picturePath, string description);
	//void destroy();
	// ObjectsGetter::DeleteMenuIteam(M.getId()); 
	bool canOrder();
};
#endif // !MENU_ITEM_H