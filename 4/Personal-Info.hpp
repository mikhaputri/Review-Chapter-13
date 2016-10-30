//
//  Personal-Info.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Personal_Info_hpp
#define Personal_Info_hpp

#include <iostream>
using namespace std;

class PersonalInfo
{
private:
    string name;
    string address;
    int age;
    string phoneNum;
public:
    PersonalInfo(string name, string address, int age, string phoneNum);
    string getName();
    string getAddress();
    int getAge();
    string getPhoneNum();
    
};

#endif /* Personal_Info_hpp */
