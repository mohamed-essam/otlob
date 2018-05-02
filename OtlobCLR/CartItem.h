#pragma once
class CartItem
{
	int variationId;
	int quantity;
public:
	CartItem();
	void setVariationId(int);
	void setquantity(int);
	int getVariationId();
	int getquantity();
};

