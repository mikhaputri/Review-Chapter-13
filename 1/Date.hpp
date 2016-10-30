//
//  Date.hpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 30/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#ifndef Date_hpp
#define Date_hpp

class Date
{
private:
    int day = 1;
    int month = 1;
    int year = 1970;
    
public:
    Date(int day, int month, int year);
    void printFirstForm();
    void printSecondForm();
    void printThirdForm();
};

#endif /* Date_hpp */
