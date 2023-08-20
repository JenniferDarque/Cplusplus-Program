#include "GroceryItem.h"

GroceryItem::GroceryItem(std::string & name) : name(name), quantity(0) {}

std::string GroceryItem::getName() const {
	    return name;
	
}

int GroceryItem::getQuantity() const {
	    return quantity;
	
}

void GroceryItem::addItem() {
	    quantity += 1;
	
}

void GroceryItem::removeItem() {
	    if (quantity > 0) {
		        quantity -=1;
		}
		else {
			quantity = 0;
		}

	}

//}

bool GroceryItem::operator<(const GroceryItem & other) const {
    return name.compare(other.getName()) < 0;
	
}
