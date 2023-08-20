#pragma once
#ifndef GROCERYITEM_H
#define GROCERYITEM_H

#include <string>

class GroceryItem {
public:
	    GroceryItem(std::string & name);
	
		    std::string getName() const;
	    int getQuantity() const;
	
		    void addItem();
	    void removeItem();
	
		   bool operator<(const GroceryItem & other) const;
	
private:
	    std::string name;
	    int quantity;

};

#endif // GROCERYITEM_H
