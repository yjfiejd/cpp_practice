//
// Created by xiaochen on 2019-07-01.
//

#include "employee.h"


int Employee::startNum = 1000;

Employee::Employee() {
    cout << "请输入员工姓名: ";
    cin >> name;
    grade = 1;
    num = startNum++;

}