#include <iostream>
using namespace std;

#if 0
// 函数指针数组
情况一:

    0 一堆函数放在外面
    void f() {cout << "void f()" << endl;}
    void g() {cout << "void g()" << endl;}
    void i() {cout << "void i()" << endl;}
    void j() {cout << "void j()" << endl;}

    1 应该放在数组里
      {f, g, i, j}
    2 数组[], 指针数组 *[]
    *[] =  {f, g, i, j}

    3 是怎样的指针,函数的指针, 要有函数返回类型void, 参数列表*[]()
    void *[]() = {f, g, i, j};

    4 由于优先级问题, 前面需要加个括号 (*[])()
    void (*[])() = {f, g, i, j};

    5 给指针取一个名字 pa
    void (*pa[])() = {f, g, i, j};





情况二: (在类里)

    0 首先需要声明

#endif

class Widget
{
public:

    Widget()
    {
        pa[0] = &Widget::f;
        pa[1] = &Widget::g;
        pa[2] = &Widget::i;
        pa[3] = &Widget::j;
    }

    void select(int idx)
    {
        (this->*pa[idx])(); // 指针解引用  *pa[idx]()
    }



private:
    void f() {cout << "void f()" << endl;}
    void g() {cout << "void g()" << endl;}
    void i() {cout << "void i()" << endl;}
    void j() {cout << "void j()" << endl;}

    enum{cmt=4};  // 如果你想用常量

    void (Widget::*pa[cmt])() = {f, g, i, j};  // 这里有问题
};







int main() {

    Widget w;
    w.select(5);

    return 0;
}