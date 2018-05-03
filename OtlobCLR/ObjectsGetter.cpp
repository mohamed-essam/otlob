#include "ObjectsGetter.h"

#pragma region data
map<int, Admin> ObjectsGetter::Admins = {};
map<int, Category>ObjectsGetter::Categories = {};
map<int, Employee>ObjectsGetter::Employees = {};
map<int, Feedback>ObjectsGetter::Feedbacks = {};
map<int, Menuu>ObjectsGetter::Menus = {};
map<int, MenuItemM>ObjectsGetter::MenuItems = {};
map<int, Order>ObjectsGetter::Orders = {};
map<int, OrderItem>ObjectsGetter::OrderItems = {};
map<int, MenuCategory>ObjectsGetter::MenuCategories = {};
map<int, User>ObjectsGetter::Users = {};
map<int, Variation>ObjectsGetter::Variations = {};
map<int, Restaurant>ObjectsGetter::Restaurants = {};
map<string, int>ObjectsGetter::Ids = {};
#pragma endregion
ObjectsGetter::ObjectsGetter()
{
}


ObjectsGetter::~ObjectsGetter()
{
}
#pragma region save
void ObjectsGetter::saveAll()
{
	saveIds();
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
void ObjectsGetter::saveIds()
{
	FileManager::saveIds(Ids);
}
void ObjectsGetter::saveAdmins()
{
	vector<Admin>vec;
	for (auto it = Admins.begin(); it != Admins.end(); it++)
		vec.push_back(it->second);
	FileManager::saveAdmin(vec);
}
void ObjectsGetter::saveCategorys()
{
	vector<Category>vec;
	for (auto it = Categories.begin(); it != Categories.end(); it++)
		vec.push_back(it->second);
	FileManager::saveCategory(vec);
}
void ObjectsGetter::saveEmployees()
{
	vector<Employee>vec;
	for (auto it = Employees.begin(); it != Employees.end(); it++)
		vec.push_back(it->second);
	FileManager::saveEmployee(vec);
}
void ObjectsGetter::saveFeedBacks()
{
	vector<Feedback>vec;
	for (auto it = Feedbacks.begin(); it != Feedbacks.end(); it++)
		vec.push_back(it->second);
	FileManager::saveFeedback(vec);
}
void ObjectsGetter::saveMenuCategorys()
{
	vector<MenuCategory>vec;
	for (auto it = MenuCategories.begin(); it != MenuCategories.end(); it++)
		vec.push_back(it->second);
	FileManager::saveMenuCategory(vec);
}
void ObjectsGetter::saveMenus()
{
	vector<Menuu>vec;
	for (auto it = Menus.begin(); it != Menus.end(); it++)
		vec.push_back(it->second);
	FileManager::saveMenu(vec);
}
void ObjectsGetter::saveMenuItems()
{
	vector<MenuItemM>vec;
	for (auto it = MenuItems.begin(); it != MenuItems.end(); it++)
		vec.push_back(it->second);
	FileManager::saveMenuItem(vec);
}
void ObjectsGetter::saveOrders()
{
	vector<Order>vec;
	for (auto it = Orders.begin(); it != Orders.end(); it++)
		vec.push_back(it->second);
	FileManager::saveOrder(vec);
}
void ObjectsGetter::saveOrderItems()
{
	vector<OrderItem>vec;
	for (auto it = OrderItems.begin(); it != OrderItems.end(); it++)
		vec.push_back(it->second);
	FileManager::saveOrderItem(vec);
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
	FileManager::saveVariation(vec);
}
void ObjectsGetter::saveRestaurant()
{
	vector<Restaurant>vec;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
		vec.push_back(it->second);
	FileManager::saveRestaurant(vec);
}
#pragma endregion save
#pragma region init
void ObjectsGetter::InitAll()
{
	initIds();
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
void ObjectsGetter::initIds()
{
	Ids = FileManager::loadIds();
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
	vector<Menuu> menus = FileManager::loadMenu();
	for (auto i : menus)
	{
		(Menus)[i.getId()] = i;
	}
}
void ObjectsGetter::initMenuIteams()
{
	vector<MenuItemM> menuItems = FileManager::loadMenuItem();
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
vector<MenuItemM> ObjectsGetter::GetAllMenuITems()
{
	vector<MenuItemM>vec;
	for (auto it = MenuItems.begin(); it != MenuItems.end(); it++)
		vec.push_back(it->second);
	return vec;
}
Admin ObjectsGetter::GetAdmin(int id)
{

	return (Admins)[id];
}
Category ObjectsGetter::GetCategory(int id)
{
	return (Categories)[id];
}

Menuu ObjectsGetter::GetMenu(int id)
{
	return (Menus)[id];
}

MenuItemM ObjectsGetter::GetMenuIteam(int id)
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
vector<Order> ObjectsGetter::GetAllOrders()
{
	vector<Order>vec;
	for (auto it = Orders.begin(); it != Orders.end(); it++)
	vec.push_back(it->second);
	return vec;
}
vector<Order> ObjectsGetter::GetOrderByRange(long long st)
{
	long long endd = st + 24 * 60 * 30;
	vector<Order>vec;
	for(auto it=Orders.begin();it!=Orders.end();it++)
	{ 
		if (it->second.getTime() < endd&&it->second.getTime() >= st)vec.push_back(it->second);
	}
	return vec;
}
vector<Category> ObjectsGetter::GetAllCategories(string gov, string area)
{
	vector<Restaurant>res = GetAllRestaurants(gov, area);
	set<int>st;
	for (auto i : res)
		for (auto j : i.getCategoriesIds())
			st.insert(j);
	vector<Category>vec;
	for (auto i : st)
		vec.push_back(GetCategory(i));
	return vec;
}
vector<Restaurant> ObjectsGetter::GetAllRestaurants(string gov,string area)
{
	vector<Restaurant>vec;
	for (auto i : Restaurants)
	{
		if(i.second.getArea() == area && i.second.getGovernorate() == gov)
			vec.push_back(i.second);
	}
	return vec;
}
vector<Restaurant> ObjectsGetter::ShowRestaurantByCategory(Category c)
{
	vector<Restaurant>vec;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
	{
		bool x = 0;
		vector<int>cat = it->second.getCategoriesIds();
		for (int i = 0; i < cat.size(); i++)
		{
			if (cat[i] == c.getId())
				x = 1;
		}
		if(x)vec.push_back(it->second);
	}
	return vec;
}
vector<Order> ObjectsGetter::GetOrderByUser(User u)
{
	vector<Order>vec;
	for (auto it = Orders.begin(); it != Orders.end(); it++)
	{
		if (it->second.getId() == u.getId())
				vec.push_back(it->second);
	}
	return vec;
}
set<string> ObjectsGetter::GetGov()
{
	set<string> st;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
	{
		st.insert(it->second.getGovernorate());
	}
	return st;
}
set<string> ObjectsGetter::GetAreas()
{
	set<string> st;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
	{
		st.insert(it->second.getArea());
	}
	return st;
}
vector<Employee> ObjectsGetter::GetAllEmployee()
{
	vector<Employee>vec;
	for (auto it = Employees.begin(); it != Employees.end(); it++)
	{
		vec.push_back(it->second);
	}

	return vec;
}
#pragma endregion Get
#pragma region Delete
void ObjectsGetter::DeleteAdmin(int id)
{

	(Admins).erase(id);
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
void ObjectsGetter::AddAdmin(Admin x)
{
	int id = Ids["admin"];
	x.setId(id);
	Admins[id] = x;
	Ids["admin"] = ++id;
}
void ObjectsGetter::AddCategory(Category x)
{
	int id = Ids["category"];
	x.setId(id);
	Categories[id] = x;
	Ids["category"] = ++id;
}

void ObjectsGetter::AddMenu(Menuu x)
{
	int id = Ids["menu"];
	x.setId(id);
	Menus[id] = x;
	Ids["menu"] = ++id;
}

void ObjectsGetter::AddMenuIteam(MenuItemM x)
{
	int id = Ids["menu_item"];
	x.setId(id);
	MenuItems[id] = x;
	Ids["menu_item"] = ++id;
}

void ObjectsGetter::AddMenuCategory(MenuCategory x)
{
	int id = Ids["menu_category"];
	x.setId(id);
	MenuCategories[id] = x;
	Ids["manu_category"] = ++id;
}

void ObjectsGetter::AddOrder(Order x)
{
	int id = Ids["order"];
	x.setId(id);
	Orders[id] = x;
	Ids["order"] = ++id;
}

void ObjectsGetter::AddOrderItem(OrderItem x)
{
	int id = Ids["order_item"];
	x.setId(id);
	OrderItems[id] = x;
	Ids["order_item"] = ++id;
}

void ObjectsGetter::AddUser(User x)
{
	int id = Ids["user"];
	x.setId(id);
	Users[id] = x;
	Ids["user"] = ++id;
}

void ObjectsGetter::AddVaritation(Variation x)
{
	int id = Ids["variation"];
	x.setId(id);
	Variations[id] = x;
	Ids["variation"] = ++id;
}

void ObjectsGetter::AddEmployee(Employee x)
{
	int id = Ids["employee"];
	x.setId(id);
	Employees[id] = x;
	Ids["employee"] = ++id;
}

void ObjectsGetter::AddEmployeeById(Employee x)
{
	Employees[x.getId()] = x;
}

void ObjectsGetter::AddFeedBack(Feedback x)
{
	int id = Ids["feedback"];
	x.setId(id);
	Feedbacks[id] = x;
	Ids["feedback"] = ++id;
}
void ObjectsGetter::AddRestaurant(Restaurant x)
{
	int id = Ids["restaurant"];
	x.setId(id);
	Restaurants[id] = x;
	Ids["restaurant"] = ++id;
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

set<string> ObjectsGetter::GetGov()
{
	set<string> st;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
	{
		st.insert(it->second.getGovernorate());
	}
	return st;
}
set<string> ObjectsGetter::GetAreas()
{
	set<string> st;
	for (auto it = Restaurants.begin(); it != Restaurants.end(); it++)
	{
		st.insert(it->second.getArea());
	}
	return st;
vector<MenuItem> ObjectsGetter::GetAllMenuITems()
{
	vector<MenuItem>vec;
	for (auto it = MenuItems.begin(); it != MenuItems.end(); it++)
		vec.push_back(it->second);
	return vec;
}
vector<Employee> ObjectsGetter::GetAllEmployee()
{
	vector<Employee>vec;
	for (auto it = Employees.begin(); it != Employees.end(); it++)
	{
		vec.push_back(it->second);
	}

	return vec;
}

#pragma endregion
