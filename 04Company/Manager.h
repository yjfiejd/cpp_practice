//
// Created by xiaochen on 2019-07-01.
//

#ifndef INC_04COMPANY_MANAGER_H
#define INC_04COMPANY_MANAGER_H


#include "employee.h"

class Manager: public Employee {
public:
    Manager();
    virtual void calcSalary();
    virtual void promote();
    virtual void disInfo();

private:
    float fixSalary;



};


#endif //INC_04COMPANY_MANAGER_H
