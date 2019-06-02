#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main(){

    int* ptr_int = new int;
    short* ptr_short = new short[500];
    cout << sizeof(ptr_int) << "\t" << sizeof(ptr_short) << endl;

    delete ptr_int;
    delete[] ptr_short;

    cout << sizeof(ptr_int) << "\t" << sizeof(ptr_short) << endl;
}