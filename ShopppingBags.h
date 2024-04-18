//
// Created by hloi on 4/16/2024.
//

#ifndef CH11SHOPPINGBAGSP24_SHOPPPINGBAGS_H
#define CH11SHOPPINGBAGSP24_SHOPPPINGBAGS_H
#include "Item.h"
#include <vector>
#include <sstream>

using std::vector;
using std::ostream;

class ShopppingBags {
private:
    // vector<Item> possibleItems; // Possible shopping items
    vector<Item> shoppingBag;   // Current shopping bag
    // Item tmpGroceryItem;           // Temp item
    unsigned int MAX_ITEMS_IN_SHOPPING_BAG;


public:
    ShopppingBags(unsigned n);
    int findMinCost(vector<Item> currBag,          // Bag contents
                                vector<Item> remainingItems);
    vector<vector<Item>> findMinBags(vector<Item> currBag, vector<Item> remainingItems, int currCost, int& minCost);
    friend ostream& operator<<(ostream& os, const ShopppingBags& shoppingBags);

};


#endif //CH11SHOPPINGBAGSP24_SHOPPPINGBAGS_H
