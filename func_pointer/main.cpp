#include <iostream>
using namespace std;


class Stu
{
    Stu(string sn, int ia):
    name(sn), age(ia){}

    void print()
    {
        cout << name << '--' << age << endl;
    }


private:
    string name;
    int age;
};





int main() {
    Stu s1("zhaosi", 39);
    Stu s2("zhangsan", 79);




    return 0;
}