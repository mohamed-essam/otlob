#include "FileManager.h"

//string* FileManager::path = new string("C:\\Users\\MOody\\Desktop\\VS\\OtlobDB");
json FileManager::vectorToJsonArray(vector<int> v)
{
	json j = json::array();
	for (int i = 0; i < v.size(); i++)
		j.push_back(v[i]);
	return j;
}
void FileManager::saveIds(map<string, int> ids)
{
	json j;
	for (auto it = ids.begin(); it != ids.end(); it++)
		j[it->first] = it->second;
	ofstream f;
	string ss = *path + "\\Ids.json";
	f.open(ss, ofstream::out);
	f << j.dump();
	f.close();
}
void FileManager::saveAdmin(vector<Admin> admins)
{
	json j = json::array();
	ofstream f;
	string ss = *path  + "\\Admin.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < admins.size(); i++)
	{
		json jj = 
		{
			{"id", admins[i].getId()},
			{"name", admins[i].getName()},
			{"phone", admins[i].getPhone()},
			{"birthdate", admins[i].getBirthdate()},
			{"address", admins[i].getAddress()},
			{"email", admins[i].getEmail()},
			{"password", admins[i].getPassword()},
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveCategory(vector<Category> cat)
{
	json j = json::array();
	ofstream f;
	string ss = *path  + "\\Category.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < cat.size(); i++)
	{
		json jj =
		{
			{"id", cat[i].getId()},
			{"name", cat[i].getName()}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveEmployee(vector<Employee> emp)
{
	json j = json::array();
	ofstream f;
	string ss = *path  + "\\Employee.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < emp.size(); i++)
	{
		json jj =
		{
			{"id", emp[i].getId()},
			{"name", emp[i].getName()},
			{"phone", emp[i].getPhone()},
			{"birthdate", emp[i].getBirthdate()},
			{"address", emp[i].getAddress()},
			{"vehicle_number", emp[i].getVehicleNumber()},
			{"order_ids", vectorToJsonArray(emp[i].getOrderIds())}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveFeedback(vector<Feedback> fb)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\Feedback.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < fb.size(); i++)
	{
		json jj =
		{
			{"id", fb[i].getId()},
			{"user_id", fb[i].getUserid()},
			{"restaurant_id", fb[i].getRestaurantid()},
			{"rating", fb[i].getRating()},
			{"review", fb[i].getReview()}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveMenu(vector<Menuu> menus)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\Menuu.json";
	f.open(ss , ofstream::out);
	for (int i = 0; i < menus.size(); i++)
	{
		json jj =
		{
			{"id", menus[i].getId()},
			{"menu_categories_ids", vectorToJsonArray(menus[i].getMenucategoriesids())}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveMenuCategory(vector<MenuCategory> cat)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\MenuCategory.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < cat.size(); i++)
	{
		json jj =
		{
			{"id", cat[i].getId()},
			{"name", cat[i].getName()},
			{"menu_items_ids", vectorToJsonArray(cat[i].getMenuitemsids())}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveMenuItem(vector<MenuItemM> it)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\MenuItemM.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < it.size(); i++)
	{
		json jj =
		{
			{"id", it[i].getId()},
			{"quantity", it[i].getQuantity()},
			{"name", it[i].getName()},
			{"picture_path", it[i].getPicturepath()},
			{"description", it[i].getDescription()},
			{"variations_ids", it[i].getVariationsids()}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveOrder(vector<Order> ord)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\Order.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < ord.size(); i++)
	{
		json jj =
		{
			{"id", ord[i].getId()},
			{"user_id", ord[i].getUserid()},
			{"restaurant_id", ord[i].getRestaurantid()},
			{"employee_id", ord[i].getEmployeeid()},
			{"rating", ord[i].getRating()},
			{"time", ord[i].getTime()},
			{"order_items_ids", ord[i].getOrderitemsids()},
			{"amount_off", ord[i].getAmountoff()},
			{"is_canceled", ord[i].getIscancelled()}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveOrderItem(vector<OrderItem> ord)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\OrderItem.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < ord.size(); i++)
	{
		json jj =
		{
			{"id", ord[i].getId()},
			{"variation_id", ord[i].getVariationid()},
			{"quantity", ord[i].getQuantity()}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveRestaurant(vector<Restaurant> res)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\Restaurant.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < res.size(); i++)
	{
		json jj =
		{
			{"id", res[i].getId()},
			{"menu_id", res[i].getMenuId()},
			{"rating", res[i].getRating()},
			{"name", res[i].getName()},
			{"governorate", res[i].getGovernorate()},
			{"area",res[i].getArea()},
			{"working_hours", res[i].getWorkingHours()},
			{"phone", res[i].getPhone()},
			{"picture_path", res[i].getPicturePath()},
			{"reviews_ids", vectorToJsonArray(res[i].getReviewsIds())},
			{"categories_ids", vectorToJsonArray(res[i].getCategoriesIds())}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}
void FileManager::saveUser(vector<User> users)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\User.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < users.size(); i++)
	{
		json jj = 
		{
			{"id", users[i].getId()},
			{"name", users[i].getName()},
			{"phone", users[i].getPhone()},
			{"birthdate", users[i].getBirthdate()},
			{"address", users[i].getAddress()},
			{"email", users[i].getEmail()},
			{"password", users[i].getPassword()},
			{"credit_card", users[i].getCreditcard()},
			{"order_ids", vectorToJsonArray(users[i].getOrderIds())}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close(); 
}
void FileManager::saveVariation(vector<Variation> var)
{
	json j = json::array();
	ofstream f;
	string ss = *path + "\\Variation.json";
	f.open(ss, ofstream::out);
	for (int i = 0; i < var.size(); i++)
	{
		json jj =
		{
			{"id", var[i].getId()},
			{"price", var[i].getPrice()},
			{"name", var[i].getName()},
			{"menu_item_id", var[i].getMenuitemid()}
		};
		j.push_back(jj);
	}
	f << j.dump();
	f.close();
}

string FileManager::slurp(ifstream& in) {
	stringstream sstr;
	sstr << in.rdbuf();
	return sstr.str();
}

json FileManager::readFile(string fileName) {
	ifstream f;
	string ss = *path + "\\" + fileName;
	f.open(ss, ofstream::in);
	string F = slurp(f);
	json j = json::parse(F);
	f.close();
	return j;
}
vector<int> FileManager::jsonArrayToVector(json arr) {
	vector<int> ret;
	for (int i = 0; i < arr.size(); i++)
	{
		ret.push_back(arr[i]);
	}
	return ret;
}
map<string, int> FileManager::loadIds()
{
	json j = readFile("Ids.json");
	map<string, int> ret;
	for (json::iterator it = j.begin(); it != j.end(); it++)
		ret[it.key()] = it.value();
	return ret;
}
vector<Admin> FileManager::loadAdmin()
{
	json jj = readFile("Admin.json");
	vector<Admin> ret;
	for (int i = 0; i < jj.size(); i++) {
		Admin admin;
		admin.setAddress(jj[i]["address"]);
		admin.setBirthdate(jj[i]["birthdate"]);
		admin.setEmail(jj[i]["email"]);
		admin.setId(jj[i]["id"]);
		admin.setName(jj[i]["name"]);
		admin.setPassword(jj[i]["password"]);
		admin.setPhone(jj[i]["phone"]);
		ret.push_back(admin);
	}
	return ret;
}

vector<Category> FileManager::loadCategory()
{
	json jj = readFile("Category.json");
	vector<Category> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Category category;
		category.setId(jj[i]["id"]);
		category.setName(jj[i]["name"]);
		ret.push_back(category);
	}
	return ret;
}

vector<Employee> FileManager::loadEmployee()
{
	json jj = readFile("Employee.json");
	vector<Employee> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Employee employee;
		employee.setAddress(jj[i]["address"]);
		employee.setBirthdate(jj[i]["birthdate"]);
		employee.setId(jj[i]["id"]);
		employee.setName(jj[i]["name"]);
		employee.setVehicleNumber(jj[i]["vehicle_number"]);
		ret.push_back(employee);
	}
	return ret;
}

vector<Feedback> FileManager::loadFeedback()
{
	json jj = readFile("Feedback.json");
	vector<Feedback> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Feedback feedback;
		feedback.setId(jj[i]["id"]);
		feedback.setRating(jj[i]["rating"]);
		feedback.setRestaurantid(jj[i]["restaurant_id"]);
		feedback.setReview(jj[i]["review"]);
		feedback.setUserid(jj[i]["user_id"]);
		ret.push_back(feedback);
	}
	return ret;
}

vector<Menuu> FileManager::loadMenu()
{
	json jj = readFile("Menu.json");
	vector<Menuu> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Menuu menu;
		menu.setId(jj[i]["id"]);
		menu.setMenucategoriesids(jsonArrayToVector(jj[i]["menu_categories_ids"]));
		ret.push_back(menu);
	}
	return ret;
}

vector<MenuCategory> FileManager::loadMenuCategory()
{
	json jj = readFile("MenuCategory.json");
	vector<MenuCategory> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		MenuCategory menuCategory;
		menuCategory.setId(jj[i]["id"]);
		menuCategory.setMenuitemsids(jsonArrayToVector(jj[i]["menu_items_ids"]));
		menuCategory.setName(jj[i]["name"]);
		ret.push_back(menuCategory);
	}
	return ret;
}

vector<MenuItemM> FileManager::loadMenuItem()
{
	json jj = readFile("MenuItem.json");
	vector<MenuItemM> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		MenuItemM menuItem;
		menuItem.setId(jj[i]["id"]);
		menuItem.setName(jj[i]["name"]);
		menuItem.setPicturepath(jj[i]["picture_path"]);
		menuItem.setQuantity(jj[i]["quantity"]);
		menuItem.setVariationsids(jsonArrayToVector(jj[i]["variations_ids"]));
		ret.push_back(menuItem);
	}
	return ret;
}

vector<Order> FileManager::loadOrder()
{
	json jj = readFile("Order.json");
	vector<Order> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Order order;
		order.setId(jj[i]["id"]);
		order.setAmountoff(jj[i]["amount_off"]);
		order.setEmployeeid(jj[i]["employee_id"]);
		order.setIscancelled(jj[i]["is_canceled"]);
		order.setOrderitemsids(jsonArrayToVector(jj[i]["order_items_ids"]));
		order.setRating(jj[i]["rating"]);
		order.setRestaurantid(jj[i]["restaurant_id"]);
		order.setTime(jj[i]["time"]);
		order.setUserid(jj[i]["user_id"]);
		ret.push_back(order);
	}
	return ret;
}

vector<OrderItem> FileManager::loadOrderItem()
{
	json jj = readFile("OrderItem.json");
	vector<OrderItem> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		OrderItem orderItem;
		orderItem.setId(jj[i]["id"]);
		orderItem.setQuantity(jj[i]["quantity"]);
		orderItem.setVariationid(jj[i]["variation_id"]);
		ret.push_back(orderItem);
	}
	return ret;
}

vector<Restaurant> FileManager::loadRestaurant()
{
	json jj = readFile("Restaurant.json");
	vector<Restaurant> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Restaurant restaurant;
		restaurant.setId(jj[i]["id"]);
		restaurant.setArea(jj[i]["area"]);
		restaurant.setGovernorate(jj[i]["governorate"]);
		restaurant.setMenuId(jj[i]["menu_id"]);
		restaurant.setName(jj[i]["name"]);
		restaurant.setPhone(jj[i]["phone"]);
		restaurant.setPicturePath(jj[i]["picture_path"]);
		restaurant.setRating(jj[i]["rating"]);
		restaurant.setWorkingHours(jj[i]["working_hours"]);
		restaurant.setCategoriesIds(jj[i]["categories_ids"]);
		ret.push_back(restaurant);
	}
	return ret;
}

vector<User> FileManager::loadUser()
{
	json jj = readFile("User.json");
	vector<User> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		User user;
		user.setAddress(jj[i]["address"]);
		user.setBirthdate(jj[i]["birthdate"]);
		user.setEmail(jj[i]["email"]);
		user.setId(jj[i]["id"]);
		user.setName(jj[i]["name"]);
		user.setPassword(jj[i]["password"]);
		user.setPhone(jj[i]["phone"]);
		ret.push_back(user);
	}
	return ret;
}

vector<Variation> FileManager::loadVariation()
{
	json jj = readFile("Variation.json");
	vector<Variation> ret;
	for (int i = 0; i < jj.size(); i++)
	{
		Variation variation;
		variation.setId(jj[i]["id"]);
		variation.setMenuitemid(jj[i]["menu_item_id"]);
		variation.setName(jj[i]["name"]);
		variation.setPrice(jj[i]["price"]);
		ret.push_back(variation);
	}
	return ret;
}