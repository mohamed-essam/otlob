#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H
#include <vector>
#include <fstream>
#include "Admin.h"
#include "Category.h"
#include "Employee.h"
#include "Human.h"
#include "Menuu.h"
#include "MenuCategory.h"
#include "MenuItemM.h"
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
	static void saveAdmin(vector<Admin>);
	static void saveCategory(vector<Category>);
	static void saveEmployee(vector<Employee>);
	static void saveFeedback(vector<Feedback>);
	static void saveMenu(vector<Menuu>);
	static void saveMenuCategory(vector<MenuCategory>);
	static void saveMenuItem(vector<MenuItemM>);
	static void saveOrder(vector<Order>);
	static void saveOrderItem(vector<OrderItem>);
	static void saveRestaurant(vector<Restaurant>);
	static void saveUser(vector<User>);
	static void saveVariation(vector<Variation>);
	static void saveIds(map<string, int>);
	static vector<Admin> loadAdmin();
	static vector<Category> loadCategory();
	static vector<Employee> loadEmployee();
	static vector<Feedback> loadFeedback();
	static vector<Menuu> loadMenu();
	static vector<MenuCategory> loadMenuCategory();
	static vector<MenuItemM> loadMenuItem();
	static vector<Order> loadOrder();
	static vector<OrderItem> loadOrderItem();
	static vector<Restaurant> loadRestaurant();
	static vector<User> loadUser();
	static vector<Variation> loadVariation();
	static map<string, int> loadIds();
	static json vectorToJsonArray(vector<int>);
	static string slurp(ifstream&);
	static json readFile(string);
	static vector<int> jsonArrayToVector(json);
};
#endif // !FILE_MANAGER_H
