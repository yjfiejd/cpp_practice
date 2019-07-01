//
// Created by xiaochen on 2019-07-01.
//

#include "Manager.h"
using namespace std;


Manager::Manager()
{
    fixSalary = 8000;
}


void Manager::calcSalary()
{
    salary = fixSalary;
}
void Manager::promote()
{
    grade = 4;
}
void Manager::disInfo()
{
    cout << "姓名: "<< name<< endl;
    cout << "工号: "<< num << endl;
    cout << "级别: "<< grade << endl;
    cout << "薪水: "<< salary << endl;
}
