#ifndef MENUU_H
#define MENUU_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class Menuu {
private:
	int id;
	vector<int> menuCategoriesIds;
public:
	Menuu() {};
	int getId();
	void setId(int);
	vector<int> getMenucategoriesids();
	void setMenucategoriesids(vector<int> menuCategoriesIds);
	static Menuu create(int id);
	~Menuu() {};
};
#endif // !MENU_H