//
//  Employee.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int idNumber;
    string department;
    string position;
    
public:
    Employee(string name, int idNumber, string department, string position);
    Employee(string name, int idNumber);
    Employee();
    string getName ();
    int getIdNumber ();
    string getDepartment ();
    string getPosition ();
    
};

#endif /* Employee_hpp */
