//
// Created by xiaochen on 2019-07-01.
//

#ifndef INC_04COMPANY_EMPLOYEE_H
#define INC_04COMPANY_EMPLOYEE_H
#include <iostream>
using namespace std;


class Employee {
public:
    Employee();

    // 定义接口, 纯虚函数
    virtual void calcSalary() = 0;
    virtual void promote() = 0;
    virtual void disInfo() = 0;

protected:
    string name;
    int grade;
    int num;
    float salary;

protected:
    static int startNum;

};


#endif //INC_04COMPANY_EMPLOYEE_H
