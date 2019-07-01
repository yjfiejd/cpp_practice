//
// Created by xiaochen on 2019-07-01.
//

#include "Technician.h"


Technician::Technician() {
    cout << "请输入小时数：" ;
    cin >> hourAmount;
    moneyPerHour = 100;
}



void Technician::calcSalary()
{
    salary = hourAmount * moneyPerHour;

}
void Technician::promote()
{
    grade = 3;
}
void Technician::disInfo()
{
    cout << "姓名: "<< name<< endl;
    cout << "工号: "<< num << endl;
    cout << "级别: "<< grade << endl;
    cout << "薪水: "<< salary << endl;

}