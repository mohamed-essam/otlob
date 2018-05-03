#include "Menuu.h"

void Menuu::setId(int id)
{
	this->id = id;
}
int Menuu::getId() {
	return id;
}
vector<int>  Menuu::getMenucategoriesids()
{
	return menuCategoriesIds;
}
void  Menuu::setMenucategoriesids(vector<int> menuCategoriesIds)
{
	this->menuCategoriesIds = menuCategoriesIds;
}
Menuu  Menuu::create(int id)
{
	Menuu m;
	m.setId(id);
	return m;
}