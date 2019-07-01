#include <iostream>
#include "Technician.h"
#include "Manager.h"

using  namespace std;


int main() {

//    Technician tech;
//    tech.calcSalary();
//    tech.disInfo();
//
//    Technician tech2;
//    tech2.calcSalary();
//    tech2.disInfo();


    Manager man;
    man.calcSalary();
    man.promote();
    man.disInfo();

    return 0;
}