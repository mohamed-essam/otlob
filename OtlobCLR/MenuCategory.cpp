#include "MenuCategory.h"

int MenuCategory::getId()
{
	return id;
}
void MenuCategory::setId(int)
{
	this->id = id;
}
string MenuCategory::getName()
{
	return name;
}
void MenuCategory::setName(string name)
{
	this->name = name;
}
vector<int> MenuCategory::getMenuitemsids()
{
	return menuItemsIds;
}
void MenuCategory::setMenuitemsids(vector<int> Menuitemsids)
{
	this->menuItemsIds = Menuitemsids;
}
MenuCategory MenuCategory::create(int id, string name)
{
	MenuCategory m;
	m.setId(id);
	m.setName(name);
	return m;
}
