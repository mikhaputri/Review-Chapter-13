//
//  Date.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//


#include "Date.hpp"
#include <iostream>
using namespace std;

void Date::printFirstForm()
{
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}
Date::Date(int day, int month, int year)
{
    this -> day = day;
    this -> month = month;
    this -> year = year;
}
void Date::printSecondForm()
{
    switch (month)
    {
        case 1:
            cout<<"January";
            break;
            
        case 2:
            cout<<"February";
            break;
            
        case 3:
            cout<<"March";
            break;
            
        case 4:
            cout<<"April";
            break;
            
        case 5:
            cout<<"May";
            break;
            
        case 6:
            cout<<"June";
            break;
            
        case 7:
            cout<<"July";
            break;
            
        case 8:
            cout<<"August";
            break;
            
        case 9:
            cout<<"September";
            break;
            
        case 10:
            cout<<"October";
            break;
            
        case 11:
            cout<<"November";
            break;
            
        case 12:
            cout<<"December";
            break;
    }
    cout<<" "<<day<<", "<<year<<endl;
}

void Date::printThirdForm()
{
    cout<<day<<" ";
    switch (month)
    {
        case 1:
            cout<<"January";
            break;
            
        case 2:
            cout<<"February";
            break;
            
        case 3:
            cout<<"March";
            break;
            
        case 4:
            cout<<"April";
            break;
            
        case 5:
            cout<<"May";
            break;
            
        case 6:
            cout<<"June";
            break;
            
        case 7:
            cout<<"July";
            break;
            
        case 8:
            cout<<"August";
            break;
            
        case 9:
            cout<<"September";
            break;
            
        case 10:
            cout<<"October";
            break;
            
        
