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


class A
{
public:
    A(int i=0, int j=0, int k=0)
        :x(i), y(j), z(k)  // 参数列表
    {

    }
    ~A(){}

private:
    int x;
    int y;
    int z;
};






int main() {
    A a;
    A *p = new A;

    return 0;
}


