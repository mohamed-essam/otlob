#include "OrderItem.h"

int OrderItem::getId()
{
	return id; 
}
void OrderItem::setId(int Id)
{
	id = Id; 
}
int OrderItem::getVariationid()
{
	return variationId; 
}
void OrderItem::setVariationid(int VariationId)
{
	variationId = VariationId;
}
int OrderItem::getQuantity()
{
	return quantity; 
}
void OrderItem::setQuantity(int Quantity)
{
	quantity = Quantity; 
}
OrderItem OrderItem::create(int id, int variationId, int quantity)
{
	OrderItem orderItem;
	orderItem.id = id; 
	orderItem.variationId = variationId; 
	orderItem.quantity = quantity; 
	return orderItem;
}