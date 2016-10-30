//
//  Retail-Item.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Retail_Item_hpp
#define Retail_Item_hpp

#include <iostream>
using namespace std;

class RetailItem
{
private:
    string description;
    int unitsOnHand;
    double price;
    string itemNum;
public:
    RetailItem(string itemNum, string description, int unitsOnHand, double price);
    string getItemNum();
    string getDescription();
    int getUnitsOnHand();
    double getPrice();
    
};

#endif /* Retail_Item_hpp */
