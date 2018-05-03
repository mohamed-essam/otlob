#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include "Menuu.h"
#include "Category.h"
#include "Feedback.h"

using namespace std;

class Restaurant {
private:
	int id;
	int menuId;
	float rating;
	string name;
	string area;
	string governorate;
	string workingHours;
	string phone;
	string picturePath;
	vector<int> reviewsIds;
	vector<int> categoriesIds;
public:
	int getId();
	void setId(int);
	int getMenuId();
	void setMenuId(int);
	float getRating();
	void setRating(float);
	string getName();
	void setName(string);
	string getGovernorate();
	void setGovernorate(string);
	string getArea();
	void setArea(string);
	string getWorkingHours();
	void setWorkingHours(string);
	string getPhone();
	void setPhone(string);
	string getPicturePath();
	void setPicturePath(string);
	vector<int> getReviewsIds();
	void addReviewId(int);
	void setCategoriesIds(vector<int>);
	vector<int> getCategoriesIds();
	void addCategoryId(int);
	static Restaurant create(int id, int menuId, float rating, string name, string gov, string area, string workingHours, string phone, string picturePath, vector<int> reviewsIds, vector<int> categoriesIds);
	/*void destroy();
	//ObjectsGetter::DeleteResturant(R.getId()); 
	Menuu getMenu();
	//ObjectsGetter::GetMenu(R.getMenuId());
	vector<Category> getCategories();
	//vector<Category> ObjectsGetter::getCategoriesOfRestayrant(Restaurant r)
	vector<Feedback> getReviews();*/
	//vector<Feedback> ObjectsGetter::getReviewsOfRestaurant(Restaurant r)
};
#endif // !RESTAURANT_H