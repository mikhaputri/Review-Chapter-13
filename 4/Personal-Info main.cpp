//
//  Personal-Info main.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
#include "Personal-Info.hpp"
using namespace std;

int main()
{
    PersonalInfo myInfo = PersonalInfo("Mikha", "Matraman", 18, "087881551567");
    PersonalInfo friendInfo = PersonalInfo("Annisa", "Kelapa Gading", 18, "081234568");
    PersonalInfo famInfo = PersonalInfo("Hellya", "Korea", 46, "08123847043");
    
    PersonalInfo infoArr[] = {myInfo, friendInfo, famInfo};
    
    for (int i = 0; i<3; i++)
    {
        cout<<"Name: "<<infoArr[i].getName()<<endl;
        cout<<"Address: "<<infoArr[i].getAddress()<<endl;
        cout<<"Age: "<<infoArr[i].getAge()<<endl;
        cout<<"Phone Number: "<<infoArr[i].getPhoneNum()<<endl;
        cout<<endl;
    }
    
}
