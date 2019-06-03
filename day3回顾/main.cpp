#include <iostream>

using namespace std;

#if 0
class Date
{

};

class List
{

};

class Stack
{

};
#endif


//1, 与类名同，无返回值，生成对象时自动被调用，用于初始化
//2，系统提供默认无参构造器，可以有参数，可以被重载或默认参数, 默认更好一些。
//3, 一经提供自定义构造器，系统默认不复存在
//
//class A
//{
//public:
//    A(int i=0, int j=0, int k=0)
//        :x(i), y(j), z(k)  // 参数列表
//    {
//
//    }
//    ~A(){}
//
//private:
//    int x;
//    int y;
//    int z;
//};
//
//
//
//int main() {
//    A a;
//    A *p = new A;
//
//    return 0;
//}


//2）
//2.1 ~ 与类名同，无参无返回，在对象销毁之前被调用，
//2.2 析构器调用时间，栈对象离开作用域，堆对象被delete

//class Stu
//{
//public:
//    Stu()
//    {
//        name = new char[100];
//    }
//    ~Stu()
//    {
//        delete name;
//    }
//
//    char *name;
//    int age;
//
//};
//
//int main()
//{
//    Stu * s = new Stu;
//
//    delete s;
//}



//3) 参数列表
//参数列表，初始化顺序与变量的声明顺序有关，跟初始化表中的顺序无关

class Stu
{
public:
    Stu(string na)
    :name(na), len(strlen(name.c_str()))
    {

    }

    void dis()
    {
        cout << len << endl;
    }

private:
    int len;
    string name;

};


int main()
{
    Stu s("china");

    s.dis();
}

