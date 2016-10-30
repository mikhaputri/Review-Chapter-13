//
//  Car.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int yearModel, string make);
    int accelerate();
    int brake();
    int getYearModel();
    string getMake();
    int getSpeed();
};

#endif /* Car_hpp */
