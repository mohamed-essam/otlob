#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H
#include <vector>
#include <fstream>
#include "Admin.h"
#include "Category.h"
#include "Employee.h"
#include "Human.h"
#include "Menu.h"
#include "MenuCategory.h"
#include "MenuItem.h"
#include "Order.h"
#include "OrderItem.h"
#include "Variation.h"
#include "Feedback.h"
#include "Restaurant.h"
#include "User.h"
#include "json.hpp"
using json = nlohmann::json;
using namespace std;
using namespace System;
public value class FileManager
{
public:
	static string *path = new string("");
	//C:\\Users\\MOody\\Desktop\\VS\\lolll\\CLR\\OtlobDB
	static void saveAdmin(vector<Admin>);
	static void saveCategory(vector<Category>);
	static void saveEmployee(vector<Employee>);
	static void saveFeedback(vector<Feedback>);
	static void saveMenu(vector<Menu>);
	static void saveMenuCategory(vector<MenuCategory>);
	static void saveMenuItem(vector<MenuItem>);
	static void saveOrder(vector<Order>);
	static void saveOrderItem(vector<OrderItem>);
	static void saveRestaurant(vector<Restaurant>);
	static void saveUser(vector<User>);
	static void saveVariation(vector<Variation>);
	static vector<Admin> loadAdmin();
	static vector<Category> loadCategory();
	static vector<Employee> loadEmployee();
	static vector<Feedback> loadFeedback();
	static vector<Menu> loadMenu();
	static vector<MenuCategory> loadMenuCategory();
	static vector<MenuItem> loadMenuItem();
	static vector<Order> loadOrder();
	static vector<OrderItem> loadOrderItem();
	static vector<Restaurant> loadRestaurant();
	static vector<User> loadUser();
	static vector<Variation> loadVariation();

	static json vectorToJsonArray(vector<int>);
	static string slurp(ifstream&);
	static json readFile(string);
	static vector<int> jsonArrayToVector(json);
};
#endif // !FILE_MANAGER_H