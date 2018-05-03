#include "MenuItemM.h"

int MenuItemM::getId() 
{
	return id;
}
void MenuItemM::setId(int id)
{
	this->id = id;
}
int MenuItemM::getQuantity()
{
	return quantity;
}
void MenuItemM::setQuantity(int quantity)
{
	this->quantity = quantity;
}
string MenuItemM::getName()
{
	return name;
}
void MenuItemM::setName(string name)
{
	this->name = name;
}
string MenuItemM::getPicturepath()
{
	return picturePath;
}
void MenuItemM::setPicturepath(string picturePath)
{
	this->picturePath = picturePath;
}
string MenuItemM::getDescription()
{
	return description;
}
void MenuItemM::setDescription(string description)
{
	this->description = description;
}
vector<int> MenuItemM::getVariationsids()
{
	return variationsIds;
}
void MenuItemM::setVariationsids(vector<int> variationsids)
{
	this->variationsIds = variationsids;
}
MenuItemM MenuItemM::create(int id, int quantity, string name, string picturePath, string description)
{
	MenuItemM m;
	m.setId(id);
	m.setQuantity(quantity);
	m.setName(name);
	m.setPicturepath(picturePath);
	m.setDescription(description);
	return m;
}
bool MenuItemM::canOrder()
{
	return (quantity > 0);
}