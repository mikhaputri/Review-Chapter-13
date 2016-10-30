//
//  Employee main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include "Employee.hpp"
using namespace std;

void displayEmployee(Employee);

int main()
{
    Employee employee1 = Employee("Susan Mayers", 47899, "Accounting", "Vice President");
    
    Employee employee2 = Employee("Mark Jones", 39119, "IT", "Programmer");
    
    Employee employee3 = Employee("Joy Rogers", 81774, "Manufacturing", "Engineer");
    
    Employee employeeArr [3] = {employee1, employee2, employee3};
    
    for (int i = 0; i<3; i++)
    {
        displayEmployee(employeeArr[i]);
    }
    
    return 0;
}

void displayEmployee(Employee e)
{
    cout<<e.getName()<<"\t\t"<<e.getIdNumber()<<"\t\t"<<e.getDepartment()<<"\t\t"<<e.getPosition()<<endl;
}

