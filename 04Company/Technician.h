//
// Created by xiaochen on 2019-07-01.
//

#ifndef INC_04COMPANY_TECHNICIAN_H
#define INC_04COMPANY_TECHNICIAN_H

#include "employee.h"

class Technician: public Employee{
public:
    Technician();

    virtual void calcSalary();
    virtual void promote();
    virtual void disInfo();

private:
    int hourAmount;
    float moneyPerHour;
};


#endif //INC_04COMPANY_TECHNICIAN_H
