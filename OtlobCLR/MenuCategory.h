#ifndef MENU_CAT_H
#define MENU_CAT_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class MenuCategory {
private:
	int id;
	string name;
	vector<int> menuItemsIds;
public:
	MenuCategory() {};
	int getId();
	void setId(int);
	string getName();
	void setName(string name);
	vector<int> getMenuitemsids();
	void setMenuitemsids(vector<int> Menuitemsids);
	static MenuCategory create(int id, string name);
	~MenuCategory() {};
};
#endif // !MENU_CAT_H