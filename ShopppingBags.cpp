//
// Created by hloi on 4/16/2024.
//

#include "ShopppingBags.h"
#include "Item.h"

#include <iostream>

using std::cout;
using std::endl;

ShopppingBags::ShopppingBags(unsigned n) {
    MAX_ITEMS_IN_SHOPPING_BAG = n;
}

int ShopppingBags::findMinCost(vector<Item> currBag,          // Bag contents
                            vector<Item> remainingItems) { // Available items
    int bagValue;        // Cost of items in shopping bag
    Item tmpGroceryItem; // Grocery item to add to bag
    unsigned int i;      // Loop index
    int minCost = INT_MAX;

    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG) { // Base case: Shopping bag full
        bagValue = 0;
        for (i = 0; i < currBag.size(); ++i) {
            bagValue += currBag.at(i).getPriceDollars();
            cout << currBag.at(i).getItemName() << "  ";
        }
        cout << "= $" << bagValue << endl;
        return bagValue; // Return cost of the shopping bag
    }
    else {                                              // Recursive case: move one
        for (i = 0; i < remainingItems.size(); ++i) {     // item to bag
            // Move item into bag
            tmpGroceryItem = remainingItems.at(i);
            remainingItems.erase(remainingItems.begin() + i);
            currBag.push_back(tmpGroceryItem);

            int tmpCost = findMinCost(currBag, remainingItems);
            if (tmpCost < minCost) {
                minCost = tmpCost;
            }
            // Take item out of bag
            remainingItems.insert(remainingItems.begin() + i,tmpGroceryItem);
            currBag.pop_back();
        }
    }
    return minCost;
}