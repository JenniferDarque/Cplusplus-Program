// Grocery.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <set>
#include "GroceryItem.h"

using namespace std;

// Read Input File and enter GroceryItems
void readInputFile(std::set<GroceryItem> & items) {
	    std::ifstream inputFile("CS210_Project_Three_Input_File.txt");
	    if (!inputFile) {
		        cout << "Error opening file CS210_Project_Three_Input_File.txt" << endl;
		        return;
		
	}
	
		    std::string itemName;
	    while (inputFile >> itemName) {
		        GroceryItem item(itemName);
		        auto existingItem = items.find(item); //use of auto per https://www.scaler.com/topics/cpp/auto-in-cpp/
		        if (existingItem != items.end()) {
			            item = *existingItem;
			            items.erase(existingItem);
			
		}
		        item.addItem();
		        items.insert(item);
		
	}
	
		    inputFile.close();
	
}
//Function to print the menu
void printMenu() {
	cout << "Menu Options:" << endl << endl;
	cout << "1: Search for an item and frequency of purchase" << endl;
	cout << "2: Print the list with frequencies of all items" << endl;
	cout << "3: Print histogram of items and purchase frequencies" << endl;
	cout << "4: Exit Program" << endl;
}
// Function to backup data
void backupData(const std::set<GroceryItem> & items) {
	    std::ofstream outputFile("frequency.dat");
	    for (const GroceryItem& item : items) {
		        outputFile << item.getName() << " " << item.getQuantity() << endl;
		
	}
	    outputFile.close();
	
}

// Print the frequency for all items
void printFrequency(const std::set<GroceryItem> & items) {
	    for (const GroceryItem& item : items) {
		        cout << item.getName() << " " << item.getQuantity() << endl;
		
	}
	
}
// Print the histogram for all items
void printHistogram(const std::set<GroceryItem> & items) {
	    for (const GroceryItem& item : items) {
		       cout << item.getName() << " ";
		        for (int i = 0; i < item.getQuantity(); ++i) {
			            cout << "*";
			
		}
		        cout << endl;
		
	}
	
}

int main() {
	    std::set<GroceryItem> items;
	    readInputFile(items);
	
		    int choice;
	    do {
			printMenu();
		        
			        cin >> choice;

			        switch (choice) { 
			            case 1: {
				                std::string itemName;
				                cout << "Enter item name: ";
								cin >> itemName;
								GroceryItem item(itemName);
				                auto it = items.find(item);
				                if (it != items.end()) {
					                    cout << "Frequency of " << itemName << " purchase: " << it->getQuantity() << endl;
					
				}
				else {
					                    cout << "Item not found." << endl;
					
				}
				                break;
				            }
			            case 2:
				                printFrequency(items);
				                break;
			            case 3:
				                printHistogram(items);
				                break;
			            case 4:
				                backupData(items);
				                cout << "Exiting the program." << endl;
				               break;
			            default:
							if (cin.fail())
							{
								cin.clear();
								cin.ignore();
								
							}
				                cout << "Invalid choice. Please try again." << endl;
				                break;
				
		}
		
	} while (choice != 4);
		
			    return 0;
		
}
