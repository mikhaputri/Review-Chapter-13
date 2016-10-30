//
//  Retail-Item.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Retail-Item.hpp"
#include <iostream>
using namespace std;

RetailItem::RetailItem(string itemNum, string description, int unitsOnHand, double price)
{
    this -> itemNum = itemNum;
    this -> description = description;
    this -> unitsOnHand = unitsOnHand;
    this -> price = price;
}

string RetailItem::getItemNum()
{
    return itemNum;
}

string RetailItem::getDescription()
{
    return description;
}

int RetailItem::getUnitsOnHand()
{
    return unitsOnHand;
}

double RetailItem::getPrice()
{
    return price;
}
