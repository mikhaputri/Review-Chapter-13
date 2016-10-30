//
//  Car.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Car.hpp"
#include <iostream>
using namespace std;

Car::Car(int yearModel, string make)
{
    this -> yearModel = yearModel;
    this -> make = make;
    speed = 0;
}

int Car::accelerate()
{
    speed += 5;
    return speed;
}

int Car::brake()
{
    speed -= 5;
    return speed;
}

int Car::getYearModel()
{
    return yearModel;
}

string Car::getMake()
{
    return make;
}

int Car::getSpeed()
{
    return speed;
}
