#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include "ShopppingBags.h"

using namespace std;


int main() {
    vector<Item> possibleItems; // Possible shopping items
    vector<Item> shoppingBag;   // Current shopping bag
    Item tmpGroceryItem("Milk", 2);           // Temp item
    possibleItems.push_back(tmpGroceryItem);
    Item tmpGroceryItem1("Belt", 24);           // Temp item
    possibleItems.push_back(tmpGroceryItem1);

    Item tmpGroceryItem2("Toys", 19);           // Temp item
    possibleItems.push_back(tmpGroceryItem2);

    Item tmpGroceryItem3("Cups", 12);           // Temp item
    possibleItems.push_back(tmpGroceryItem3);

    // Try different combinations of three items
    ShopppingBags bags(3);
    int minCost = bags.findMinCost( shoppingBag, possibleItems);
    cout << "Minimum cost: $" << minCost << endl;
    return 0;
}