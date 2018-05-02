#ifndef OBJECT_GETTER_H
#define OBJECT_GETTER_H
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "FileManager.h"
using namespace std;

class ObjectsGetter
{
public:
	static map<int, Admin>Admins;
	static map<int, Category>Categories;
	static map<int, Employee>Employees;
	static map<int, Feedback>Feedbacks;
	static map<int, Human>Humans;
	static map<int, Menu>Menus;
	static map<int, MenuItem>MenuItems;
	static map<int, Order>Orders;
	static map<int, OrderItem>OrderItems;
	static map<int, MenuCategory>MenuCategories;
	static map<int, User>Users;
	static map<int, Variation>Variations;
	static map<int, Restaurant>Restaurants;
	static void  initAdmins();
	static void  initCategorys();
	static void  initEmployees();
	static void  initFeedBacks();
	static void  initMenuCategorys();
	static void  initMenus();
	static void  initMenuIteams();
	static void  initOrders();
	static void  initOrderItems();
	static void  initUsers();
	static void  initVaritations();
	static void  initRestaurant();
	static void  saveAdmins();
	static void  saveCategorys();
	static void  saveEmployees();
	static void  saveFeedBacks();
	static void  saveMenuCategorys();
	static void  saveMenus();
	static void  saveMenuItems();
	static void  saveOrders();
	static void  saveOrderItems();
	static void  saveUsers();
	static void  saveVariations();
	static void  saveRestaurant();
public:
	static Admin GetAdmin(int);
	static Admin GetAdminByEmailAndPassword(string, string);
	static User GetUserByEmailAndPassword(string, string);
	static Category GetCategory(int);
	static Employee GetEmployee(int);
	static Feedback GetFeedBack(int);
	static Human GetHuman(int);
	static MenuCategory GetMenuCategory(int);
	static Menu GetMenu(int);
	static MenuItem GetMenuIteam(int);
	static Order GetOrder(int);
	static OrderItem GetOrderItem(int);
	static User GetUser(int);
	static Variation GetVaritation(int);
	static Restaurant GetRestaurant(int);
	static void DeleteAdmin(int);
	static void DeleteCategory(int);
	static void DeleteEmployee(int);
	static void DeleteFeedBack(int);
	static void DeleteHuman(int);
	static void DeleteMenuCategory(int);
	static void DeleteMenu(int);
	static void DeleteMenuIteam(int);
	static void DeleteOrder(int);
	static void DeleteOrderItem(int);
	static void DeleteUser(int);
	static void DeleteVaritation(int);
	static void DeleteRestaurant(int);
	static void AddAdmin(int id, Admin x);
	static void AddHuman(int id, Human x);
	static void AddCategory(int id, Category x);
	static void AddMenu(int id, Menu x);
	static void AddMenuIteam(int id, MenuItem x);
	static void AddMenuCategory(int id, MenuCategory x);
	static void AddOrder(int id, Order x);
	static void AddOrderItem(int id, OrderItem x);
	static void AddUser(int id, User x);
	static void AddVaritation(int id, Variation x);
	static void AddEmployee(int id, Employee x);
	static void AddFeedBack(int id, Feedback x);
	static void AddRestaurant(int id, Restaurant x);
	static vector<Restaurant> listRestaurantsByCategoryId(int);
	static vector<Order> listOrdersForEmployee(Employee e);
	static float getTotalAmountOfOrder(Order o);
	static vector<OrderItem> getOrderItems(Order o);
	static vector<Category> getCategoriesOfRestayrant(Restaurant r);
	static vector<Feedback> getReviewsOfRestaurant(Restaurant r);
	static vector<Order> listOrdersOfUser(User u);
	static void InitAll();
	static void saveAll();
	ObjectsGetter();
	~ObjectsGetter();
};
#endif // !OBJECT_GETTER_H

