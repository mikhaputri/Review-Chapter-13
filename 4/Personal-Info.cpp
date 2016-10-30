//
//  Personal-Info.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include "Personal-Info.hpp"
#include <iostream>
using namespace std;

PersonalInfo::PersonalInfo(string name, string address, int age, string phoneNum)
{
    this -> name = name;
    this -> address = address;
    this -> age = age;
    this -> phoneNum = phoneNum;
}

string PersonalInfo::getName()
{
    return name;
}

string PersonalInfo::getAddress()
{
    return address;
}

int PersonalInfo::getAge()
{
    return age;
}

string PersonalInfo::getPhoneNum()
{
    return phoneNum;
}
