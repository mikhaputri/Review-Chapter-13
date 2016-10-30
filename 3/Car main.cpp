//
//  Car main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Car.hpp"
#include <iostream>
using namespace std;

int main()
{
    int year;
    string make;
    
    cout<<"Enter car's year: ";
    cin>>year;
    cout<<"and make: ";
    cin>>make;
    
    Car car1(year, make);
    
    for (int i = 0; i<5; i++)
    {
        car1.accelerate();
    }
    cout<<"The current speed after 5 times of accelartion is "<<car1.getSpeed()<<"km/h"<<endl;
    
    for (int k = 0; k<5; k++)
    {
        car1.brake();
    }
    cout<<"The current speed after 5 times of brake is "<<car1.getSpeed()<<"km/h"<<endl;
}
