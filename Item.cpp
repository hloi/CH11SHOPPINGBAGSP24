//
// Created by hloi on 4/16/2024.
//

#include "Item.h"

Item::Item(const string &itemName, int priceDollars) : itemName(itemName), priceDollars(priceDollars) {}

const string &Item::getItemName() const {
    return itemName;
}

int Item::getPriceDollars() const {
    return priceDollars;
}

bool Item::operator==(const Item &other) const {
    return itemName == other.itemName && priceDollars == other.priceDollars;
}

std::ostream &operator<<(std::ostream &os, const Item &item) {
    os << item.itemName << " " << item.priceDollars;
    return os;
}
