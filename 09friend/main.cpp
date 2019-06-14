#include <iostream>

using namespace std;

class A;  //只能用于声明 引用和指针

class B
{
public:
    void dis(A & t);
//    void dis(A & t)
//    {
//        cout << t.x << t.y << t.z << endl;
////        cout << t.getx() << "\n" << t.gety() << "\n" << t.getz() << endl;
//    }

};


class A
{

public:
//    void dis(A & t)
//    {
//        cout << t.x << t.y << t.z << endl;
//    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    int getz()
    {
        return z;
    }

    friend void dis(A & t); // 函数（全局，也可以为类成员）友元函数

    friend void B::dis(A & t); // 函数（全局，也可以为类成员）友元函数


private:
    int x;
    int y;
    int z;
};



void dis(A & t)
{
    cout << t.x << "\n" << t.y << "\n" << t.z << endl;
}


void B::dis(A & t)
{
    cout << t.x << "\n" << t.y << "\n" << t.z << endl;
}


// 同类之间不需要友元
// 异类之间使用, 友元，就可以不通过调用的方式效率太低t.getx()，可以直接取t.z, t.x



int main() {

    A a;
    B b;
//    a.dis(b);  // ok
//
//    for (int i; i < 1000; i++)
//        b.dis(a);
//    dis(a);
    b.dis(a);

    return 0;
}