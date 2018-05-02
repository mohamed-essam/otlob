#ifndef MENU_H
#define MENU_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Menu {
private:
	int id;
	vector<int> menuCategoriesIds;
public:
	Menu() {};
	int getId();
	void setId(int);
	vector<int> getMenucategoriesids();
	void setMenucategoriesids(vector<int> menuCategoriesIds);
	static Menu create(int id);
	~Menu() {};
};
#endif // !MENU_H