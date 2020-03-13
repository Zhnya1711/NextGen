#pragma once
#include "ProductDescription.h"
#include "Money.h"
class SalesLineItem
{
private:
	int quantity;
	ProdictDescription description;
public:
	SalesLineItem(ProdictDescription desc, int quantity);
	int getSubtotal();
};#pragma once
