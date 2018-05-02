#pragma once
#include "CartItem.h"
#include <iostream>
#include <vector>
using namespace std;
class Cart
{
	static vector<CartItem> items;
public:
	Cart();
	static void addItem(CartItem);
	static vector<CartItem> getItems();
	static void empity();
};

