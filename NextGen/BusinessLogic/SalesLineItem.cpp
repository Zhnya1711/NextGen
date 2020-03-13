#include "SalesLineItem.h"

SalesLineItem::SalesLineItem(ProdictDescription desc, int quantity) {
    this->quantity = quantity;
}
int SalesLineItem::getSubtotal() {
    return 0;
}