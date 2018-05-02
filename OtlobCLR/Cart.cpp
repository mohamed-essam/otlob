#include "Cart.h"

vector<CartItem> Cart::items = vector<CartItem>();

Cart::Cart()
{
}


void Cart::addItem(CartItem i)
{
	items.push_back(i);
}
vector<CartItem> Cart::getItems()
{
	return items;
}
void Cart::empity()
{
	items.clear();
}