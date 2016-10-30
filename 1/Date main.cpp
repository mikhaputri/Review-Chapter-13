//
//  Date main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include "Date.hpp"
using namespace std;

int main()
{
    int d, m, y;
    cout<<"Enter day (dd): ";
    cin>>d;
    while (d<1 || d>31)
    {
        cout<<"Day cannot be greater than 31 or less than 1. Please enter day: ";
        cin>>d;
    }
    
    cout<<"Enter month (mm): ";
    cin>>m;
    while (m<1 || m>12)
    {
        cout<<"Day cannot be greater than 12 or less than 1. Please enter month: ";
        cin>>m;
    }
    
    cout<<"Enter year (yyyy): ";
    cin>>y;
    
    Date newDate = Date(d,m,y);
    // mm/dd/yy
    newDate.printFirstForm();
    // mm, dd, yy
    newDate.printSecondForm();
    // dd, mm, yy
    newDate.printThirdForm();
    
    return 0;
}
