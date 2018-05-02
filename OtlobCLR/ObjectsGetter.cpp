#include "ObjectsGetter.h"

map<int, Admin> ObjectsGetter::Admins = {};
map<int, Category>ObjectsGetter::Categories = {};
map<int, Employee>ObjectsGetter::Employees = {};
map<int, Feedback>ObjectsGetter::Feedbacks = {};
map<int, Human>ObjectsGetter::Humans = {};
map<int, Menu>ObjectsGetter::Menus = {};
map<int, MenuItem>ObjectsGetter::MenuItems = {};
map<int, Order>ObjectsGetter::Orders = {};
map<int, OrderItem>ObjectsGetter::OrderItems = {};
map<int, MenuCategory>ObjectsGetter::MenuCategories = {};
map<int, User>ObjectsGetter::Users = {};
map<int, Variation>ObjectsGetter::Variations = {};
map<int, Restaurant>ObjectsGetter::Restaurants = {};

ObjectsGetter::ObjectsGetter()
{
}


ObjectsGetter::~ObjectsGetter()
{
}
#pragma region save
void ObjectsGetter::saveAll()
{
	saveAdmins();
	saveCategorys();
	saveEmployees();
	saveFeedBacks();
	saveMenuCategorys();
	saveMenus();
	saveMenuItems();
	saveOrders();
	saveOrderItems();
	saveUsers();
	saveVariations();
	saveRestaurant();
}
void ObjectsGetter::saveAdmins()
{
	vector<Admin>vec;
	for (auto it = Admins.begin(); it != Admins.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveCategorys()
{
	vector<Category>vec;
	for (auto it = Categories.begin(); it != Categories.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveEmployees()
{
	vector<Employee>vec;
	for (auto it = Employees.begin(); it != Employees.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveFeedBacks()
{
	vector<Feedback>vec;
	for (auto it = Feedbacks.begin(); it != Feedbacks.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveMenuCategorys()
{
	vector<MenuCategory>vec;
	for (auto it = MenuCategories.begin(); it != MenuCategories.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveMenus()
{
	vector<Menu>vec;
	for (auto it = Menus.begin(); it != Menus.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveMenuItems()
{
	vector<MenuItem>vec;
	for (auto it = MenuItems.begin(); it != MenuItems.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveOrders()
{
	vector<Order>vec;
	for (auto it = Orders.begin(); it != Orders.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveOrderItems()
{
	vector<OrderItem>vec;
	for (auto it = OrderItems.begin(); it != OrderItems.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveUsers()
{
	vector<User>vec;
	for (auto it = Users.begin(); it != Users.end(); it++)
		vec.push_back(it->second);
	FileManager::saveUser(vec); 
}
void ObjectsGetter::saveVariations()
{
	vector<Variation>vec;
	for (auto it = Variations.begin(); it != Variations.end(); it++)
		vec.push_back(it->second);
}
void ObjectsGetter::saveRestaurant()
{
	vector<Restaurant>vec;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
		vec.push_back(it->second);

}
#pragma endregion save
#pragma region init
void ObjectsGetter::InitAll()
{
	initAdmins();
	initCategorys();
	initEmployees();
	initFeedBacks();
	initMenuCategorys();
	initMenus();
	initMenuIteams();
	initOrders();
	initOrderItems();
	initUsers();
	initVaritations();
	initRestaurant();
}
void ObjectsGetter::initAdmins()
{
	vector<Admin> admins = FileManager::loadAdmin();
	for (auto i : admins)
	{
		(Admins)[i.getId()] = i;
	}
}
void ObjectsGetter::initCategorys()
{
	vector<Category> categories = FileManager::loadCategory();
	for (auto i : categories)
	{
		(Categories)[i.getId()] = i;
	}
}
void ObjectsGetter::initEmployees()
{
	vector<Employee> empolyees = FileManager::loadEmployee();
	for (auto i : empolyees)
	{
		(Employees)[i.getId()] = i;
	}
}
void ObjectsGetter::initFeedBacks()
{
	vector<Feedback> feedbacks = FileManager::loadFeedback();
	for (auto i : feedbacks)
	{
		(Feedbacks)[i.getId()] = i;
	}
}
void ObjectsGetter::initMenuCategorys()
{
	vector<MenuCategory> menuCategories = FileManager::loadMenuCategory();
	for (auto i : menuCategories)
	{
		(MenuCategories)[i.getId()] = i;
	}
}
void ObjectsGetter::initMenus()
{
	vector<Menu> menus = FileManager::loadMenu();
	for (auto i : menus)
	{
		(Menus)[i.getId()] = i;
	}
}
void ObjectsGetter::initMenuIteams()
{
	vector<MenuItem> menuItems = FileManager::loadMenuItem();
	for (auto i : menuItems)
	{
		(MenuItems)[i.getId()] = i;
	}
}
void ObjectsGetter::initOrders()
{
	vector<Order> orders = FileManager::loadOrder();
	for (auto i : orders)
	{
		(Orders)[i.getId()] = i;
	}
}
void ObjectsGetter::initOrderItems()
{
	vector<OrderItem> orderItems = FileManager::loadOrderItem();
	for (auto i : orderItems)
	{
		(OrderItems)[i.getId()] = i;
	}
}
void ObjectsGetter::initUsers()
{
	vector<User> users = FileManager::loadUser();
	for (auto i : users)
	{
		(Users)[i.getId()] = i;
	}
}
void ObjectsGetter::initVaritations()
{
	vector<Variation> varitations = FileManager::loadVariation();
	for (auto i : varitations)
	{
		(Variations)[i.getId()] = i;
	}
}

void ObjectsGetter::initRestaurant()
{
	vector<Restaurant> restaurants = FileManager::loadRestaurant();
	for (auto i : restaurants)
	{
		(Restaurants)[i.getId()] = i;
	}
}
#pragma endregion init
#pragma region Get
Admin ObjectsGetter::GetAdminByEmailAndPassword(string email, string pass)
{
	for (auto it = (Admins).begin(); it != (Admins).end(); it++)
	{
		string em = it->second.getEmail(); 
		string ps = it->second.getPassword();
		if ( em == email && ps == pass)return it->second;
	}
	throw new exception("Admin not found");
}
User ObjectsGetter::GetUserByEmailAndPassword(string email, string pass)
{
	for (auto it = (Users).begin(); it != (Users).end(); it++)
	{
		if (it->second.getEmail() == email && it->second.getPassword() == pass)return it->second;
	}
	throw new exception("User not found");
}

Admin ObjectsGetter::GetAdmin(int id)
{

	return (Admins)[id];
}
Human ObjectsGetter::GetHuman(int id)
{
	return (Humans)[id];
}

Category ObjectsGetter::GetCategory(int id)
{
	return (Categories)[id];
}

Menu ObjectsGetter::GetMenu(int id)
{
	return (Menus)[id];
}

MenuItem ObjectsGetter::GetMenuIteam(int id)
{
	return (MenuItems)[id];
}

MenuCategory ObjectsGetter::GetMenuCategory(int id)
{
	return (MenuCategories)[id];
}

Order ObjectsGetter::GetOrder(int id)
{
	return (Orders)[id];
}

OrderItem ObjectsGetter::GetOrderItem(int id)
{
	return (OrderItems)[id];
}

User ObjectsGetter::GetUser(int id)
{
	return (Users)[id];
}

Variation ObjectsGetter::GetVaritation(int id)
{
	return (Variations)[id];
}

Employee ObjectsGetter::GetEmployee(int id)
{
	return (Employees)[id];
}

Feedback ObjectsGetter::GetFeedBack(int id)
{
	return (Feedbacks)[id];
}
Restaurant ObjectsGetter::GetRestaurant(int id)
{
	return (Restaurants)[id];
}
#pragma endregion Get
#pragma region Delete
void ObjectsGetter::DeleteAdmin(int id)
{

	(Admins).erase(id);
}
void ObjectsGetter::DeleteHuman(int id)
{
	(Humans).erase(id);
}

void ObjectsGetter::DeleteCategory(int id)
{
	(Categories).erase(id);
}

void ObjectsGetter::DeleteMenu(int id)
{
	(Menus).erase(id);
}

void ObjectsGetter::DeleteMenuIteam(int id)
{
	(MenuItems).erase(id);
}

void ObjectsGetter::DeleteMenuCategory(int id)
{
	(MenuCategories).erase(id);
}

void ObjectsGetter::DeleteOrder(int id)
{
	(Orders).erase(id);
}

void ObjectsGetter::DeleteOrderItem(int id)
{
	(OrderItems).erase(id);
}

void ObjectsGetter::DeleteUser(int id)
{
	(Users).erase(id);
}

void ObjectsGetter::DeleteVaritation(int id)
{
	(Variations).erase(id);
}

void ObjectsGetter::DeleteEmployee(int id)
{
	(Employees).erase(id);
}

void ObjectsGetter::DeleteFeedBack(int id)
{
	(Feedbacks).erase(id);
}

void ObjectsGetter::DeleteRestaurant(int id)
{
	(Restaurants).erase(id);
}
#pragma endregion Delete

#pragma region Add
void ObjectsGetter::AddAdmin(int id, Admin x)
{
	(Admins)[id] = x;
}
void ObjectsGetter::AddHuman(int id, Human x)
{
	(Humans)[id] = x;
}

void ObjectsGetter::AddCategory(int id, Category x)
{
	(Categories)[id] = x;
}

void ObjectsGetter::AddMenu(int id, Menu x)
{
	(Menus)[id] = x;
}

void ObjectsGetter::AddMenuIteam(int id, MenuItem x)
{
	(MenuItems)[id] = x;
}

void ObjectsGetter::AddMenuCategory(int id, MenuCategory x)
{
	(MenuCategories)[id] = x;
}

void ObjectsGetter::AddOrder(int id, Order x)
{
	(Orders)[id] = x;
}

void ObjectsGetter::AddOrderItem(int id, OrderItem x)
{
	(OrderItems)[id] = x;
}

void ObjectsGetter::AddUser(int id, User x)
{
	(Users)[id] = x;
}

void ObjectsGetter::AddVaritation(int id, Variation x)
{
	(Variations)[id] = x;
}

void ObjectsGetter::AddEmployee(int id, Employee x)
{
	(Employees)[id] = x;
}

void ObjectsGetter::AddFeedBack(int id, Feedback x)
{
	(Feedbacks)[id] = x;
}
void ObjectsGetter::AddRestaurant(int id, Restaurant x)
{
	(Restaurants)[id] = x;
}
#pragma endregion Add
#pragma region kee
vector<Restaurant> ObjectsGetter::listRestaurantsByCategoryId(int id)
{
	vector<Restaurant> ret;
	for (auto i : Restaurants)
		for (auto j : i.second.getCategoriesIds())
			if (j == id)
			{
				ret.push_back(i.second);
				break;
			}
	return ret;
}
vector<Order> ObjectsGetter::listOrdersForEmployee(Employee e)
{
	vector<Order> ret;
	for (auto i : e.getOrderIds())
		ret.push_back(GetOrder(i));
	return ret;
}
float ObjectsGetter::getTotalAmountOfOrder(Order o)
{
	float ret = 0.0;
	for (auto i : o.getOrderitemsids())
	{
		Variation variation = GetVaritation(i);
		ret += variation.getPrice();
	}
	return ret;
}
vector<OrderItem> ObjectsGetter::getOrderItems(Order o)
{
	vector<OrderItem> ret;
	for (auto i : o.getOrderitemsids())
		ret.push_back(GetOrderItem(i));
	return ret;
}
vector<Category> ObjectsGetter::getCategoriesOfRestayrant(Restaurant r)
{
	vector<Category> ret;
	for (auto i : r.getCategoriesIds())
		ret.push_back(GetCategory(i));
	return ret;
}
vector<Feedback> ObjectsGetter::getReviewsOfRestaurant(Restaurant r)
{
	vector<Feedback> ret;
	for (auto i : r.getReviewsIds())
	{
		ret.push_back(GetFeedBack(i));
	}
	return ret;
}
vector<Order> ObjectsGetter::listOrdersOfUser(User u)
{
	vector<Order> ret;
	for (auto i : u.getOrderIds())
		ret.push_back(GetOrder(i));
	return ret;
}

#pragma endregion