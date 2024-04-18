/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "Item.h"
#include "ShopppingBags.h"
#include <iostream>
using namespace std;

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testMyFunction() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
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
        TS_ASSERT_EQUALS(minCost, 33);
    }
};
#endif /* NEWCXXTEST_H */
