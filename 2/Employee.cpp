//
//  Employee.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//


#include "Employee.hpp"
#include <iostream>
using namespace std;

Employee::Employee(string name, int idNumber, string department, string position)
{
    this -> name = name;
    this -> idNumber = idNumber;
    this -> department = department;
    this -> position = position;
}

Employee::Employee(string name, int idNumber)
{
    this -> name = name;
    this -> idNumber = idNumber;
    this -> department = "";
    this -> position = "";
}

Employee::Employee()
{
    this -> name = "";
    this -> idNumber = 0;
    this -> department = "";
    this -> position = "";
}

string Employee::getName ()
{
    return this -> name;
}

int Employee::getIdNumber()
{
    return this -> idNumber;
}

string Employee::getDepartment()
{
    return this -> department;
}

string Employee::getPosition()
{
    return this -> position;
}
