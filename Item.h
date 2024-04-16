//
// Created by hloi on 4/16/2024.
//

#ifndef CH11SHOPPINGBAGSP24_ITEM_H
#define CH11SHOPPINGBAGSP24_ITEM_H
#include <string>
#include <sstream>

using std::string;

class Item {
private:
    string itemName;
    int priceDollars;

public:
    Item() {}
    // non-default constructor
    Item(const string &itemName, int priceDollars);
    const string &getItemName() const;
    int getPriceDollars() const;

    bool operator==(const Item& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Item& item);

};

#endif //CH11SHOPPINGBAGSP24_ITEM_H
