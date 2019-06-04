#include <iostream>
#include "mystring.h"

using namespace std;

int main() {

    string s;   // char *p = "";
    string s2("china"); // char *p = "china";

    cout << s << endl;
    cout << s2 << endl;


    string s3(s2);  // 用一个对象生成另一个对象， 拷贝构造器, 注意别两次析构，会报错
    cout << s3 << endl;

    cout << "---------------------" << endl;

    String ms;
    String ms2("canada");

    cout << ms.c_str();
    cout << ms2.c_str() << endl;


    String ms3(ms2);   // NULL, char *  String
    cout << ms3.c_str() << endl;


    return 0;
}