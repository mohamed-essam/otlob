#include "CartItem.h"

CartItem::CartItem()
{
}


void CartItem::setVariationId(int itemId)
{
	variationId = itemId;
}
void CartItem::setquantity(int quantityy)
{
	this->quantity = quantityy;
}
int CartItem::getVariationId()
{
	return variationId;
}
int CartItem::getquantity()
{
	return quantity;
}
