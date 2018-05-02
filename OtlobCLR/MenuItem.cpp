#include "MenuItem.h"

int MenuItem::getId() 
{
	return id;
}
void MenuItem::setId(int id)
{
	this->id = id;
}
int MenuItem::getQuantity()
{
	return quantity;
}
void MenuItem::setQuantity(int quantity)
{
	this->quantity = quantity;
}
string MenuItem::getName()
{
	return name;
}
void MenuItem::setName(string name)
{
	this->name = name;
}
string MenuItem::getPicturepath()
{
	return picturePath;
}
void MenuItem::setPicturepath(string picturePath)
{
	this->picturePath = picturePath;
}
string MenuItem::getDescription()
{
	return description;
}
void MenuItem::setDescription(string description)
{
	this->description = description;
}
vector<int> MenuItem::getVariationsids()
{
	return variationsIds;
}
void MenuItem::setVariationsids(vector<int> variationsids)
{
	this->variationsIds = variationsIds;
}
MenuItem MenuItem::create(int id, int quantity, string name, string picturePath, string description)
{
	MenuItem m;
	m.setId(id);
	m.setQuantity(quantity);
	m.setName(name);
	m.setPicturepath(picturePath);
	m.setDescription(description);
	return m;
}
bool MenuItem::canOrder()
{
	return (quantity > 0);
}