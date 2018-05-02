#include "Menu.h"

void Menu::setId(int id)
{
	this->id = id;
}
int Menu::getId() {
	return id;
}
vector<int>  Menu::getMenucategoriesids()
{
	return menuCategoriesIds;
}
void  Menu::setMenucategoriesids(vector<int> menuCategoriesIds)
{
	this->menuCategoriesIds = menuCategoriesIds;
}
Menu  Menu::create(int id)
{
	Menu m;
	m.setId(id);
	return m;
}