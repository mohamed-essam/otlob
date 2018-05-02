#include"Variation.h"

using namespace std;

int Variation::getId()
{
	return id;
}
void Variation::setId(int Id)
{
	id = Id;
}
float Variation::getPrice()
{
	return price;
}
void Variation::setPrice(float Price)
{
	price = Price;
}
string Variation::getName()
{
	return name;
}
void Variation::setName(string Name)
{
	name = Name;
}
int Variation::getMenuitemid()
{
	return menuItemId;
}
void Variation::setMenuitemid(int Menuitemid)
{
	menuItemId = Menuitemid;
}
Variation Variation::create(int id, float price, string name, int menuItemId)
{
	Variation variation;
	variation.id = id;
	variation.price = price;
	variation.name = name;
	variation.menuItemId = menuItemId;
	return variation;
}