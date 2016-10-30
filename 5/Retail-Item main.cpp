//
//  Retail-Item main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Retail-Item.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    RetailItem item1 = RetailItem("Item #1","Jacket", 12, 59.85);
    RetailItem item2 = RetailItem("Item #2","Designer Jeans", 40, 34.85);
    RetailItem item3 = RetailItem("Item #3","Shirt", 20, 24.95);
    
    RetailItem itemArr[] = {item1, item2, item3};
    
    cout<<"\t\t\t\tDescription\t\t\t\tUnits On Hand\t\t\t\tPrice"<<endl;
    cout<<"---------------------------------------------------------------------------------"<<endl;
    
    for (int i=0; i<3; i++)
    {
        cout<<itemArr[i].getItemNum()<<"\t\t\t"<<itemArr[i].getDescription()<<"\t\t\t\t\t"<<itemArr[i].getUnitsOnHand()<<"\t\t\t\t\t\t\t"<<itemArr[i].getPrice()<<endl;
    }
}
