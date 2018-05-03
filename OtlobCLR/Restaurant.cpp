#include "Restaurant.h"

int Restaurant::getId()
{
	return id; 
}
void Restaurant::setId(int Id)
{
	id = Id; 
}
int Restaurant::getMenuId()
{
	return menuId; 
}
void Restaurant::setMenuId(int MenuId)
{
	menuId = MenuId;
}
float Restaurant::getRating()
{
	return rating; 
}
void Restaurant::setRating(float Rating)
{
	rating = Rating;
}
string Restaurant::getName()
{
	return name; 
}
void Restaurant::setName(string Name)
{
	name = Name;
}
string Restaurant::getGovernorate()
{
	return governorate; 
}
void Restaurant::setGovernorate(string gov)
{
	governorate = gov;
}
string Restaurant::getArea()
{
	return area;
}
void Restaurant::setArea(string area)
{
	this->area = area;
}
string Restaurant::getWorkingHours()
{
	return workingHours; 
}
void Restaurant::setWorkingHours(string WorkingHours)
{
	workingHours = WorkingHours;
}
string Restaurant::getPhone()
{
	return phone; 
}
void Restaurant::setPhone(string Phone)
{
	phone = Phone; 
}
string Restaurant::getPicturePath()
{
	return picturePath; 
}
void Restaurant::setPicturePath(string PicturePath)
{
	picturePath = PicturePath; 
}
vector<int> Restaurant::getReviewsIds()
{
	return reviewsIds; 
}
void Restaurant::addReviewId(int Id)
{
	reviewsIds.push_back(Id); 
}
void Restaurant::setCategoriesIds(vector<int> v)
{
	this->categoriesIds = v;
}
vector<int> Restaurant::getCategoriesIds()
{
	return categoriesIds; 
}
void Restaurant::addCategoryId(int categoryId)
{
	categoriesIds.push_back(categoryId); 
}
Restaurant Restaurant::create(int id, int menuId, float rating, string name, string gov, string area, string workingHours, string phone, string picturePath, vector<int> reviewsIds, vector<int> categoriesIds)
{
	Restaurant restaurant; 
	restaurant.setId(id); 
	restaurant.setMenuId(menuId); 
	restaurant.setRating(rating); 
	restaurant.setName(name); 
	restaurant.setGovernorate(gov);
	restaurant.setArea(area);
	restaurant.setWorkingHours(workingHours); 
	restaurant.setPhone(phone); 
	restaurant.setPicturePath(picturePath); 
	for(int i=0 ; i<reviewsIds.size() ; i++)
		restaurant.addReviewId(reviewsIds[i]);
	for (int i = 0; i<categoriesIds.size(); i++)
		restaurant.addCategoryId(categoriesIds[i]);
	return restaurant; 
}