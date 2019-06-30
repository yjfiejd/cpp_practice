#include <iostream>
using namespace std;


// 静多态 -> 倾轧  --》  编译阶段就确定了
//void func(int a, float b)  // func_i_f()
//{
//
//}
//
//void func(float a, int b)  // func_f_i()
//{
//
//}

// 下面我们需要学习动多态，在运行时发生, 运行的条件有三个
// 1, 父类中有虚函数, 声明虚函数的方法。（注意写法-> 拿出去的时候可以不用带上virtual，里面需要带上virtual）
// 2，子类中覆写（override）了父类的虚函数
// 3, 将子类对象地址 赋给 父类的指针，并发生虚函数调用



// 声明虚函数的方法. virtual void func(); 声明型关键字
// 覆写(override), 发生在父子类中，父类中的函数有virtual声明，子类中，同参，同名，同返回的函数（就是相同的函数），之间构成覆写
// 重载(overload), 同一作用域中，函数名相同，参数列表不同。
// shadow,  发生在父子类中的同名成员。


// 之前提到的赋值兼容时候可以三种情况：
// 1子类对象赋给父类的对象
// 2子类对象赋给父类的引用
// 3子类对象的地址赋给父类的指针

//  多态这里只用第三种情况，指针



// 覆写的函数，是不是一定同父类的访问方式一致，看子类的需求。



//  父类
class Shape
{
public:
    Shape(int x, int y)
            :_x(x), _y(y){}

    virtual void draw();

protected:
    int _x;
    int _y;
};

void Shape::draw()
{
    cout << "draw from (" << _x << "," << _y << ")" << endl;
}


// 子类
class Rect:public Shape
{
public:
    Rect(int x, int y, int len, int wid)
        :Shape(x, y), _len(len), _wid(wid){}


    virtual void draw()
    {
        cout << "start from " << "(" << _x <<","<< _y << ")";
        cout << "len = "<< _len << " wid = " << _wid << endl;
    }

private:
    int _len;
    int _wid;
};


// 子类
class Circle:public Shape
{
public:
    Circle(int x, int y, int r)
            :Shape(x, y), _radius(r) {}

    virtual void draw()
    {
        cout << "start from " << "(" << _x <<","<< _y << ")";
        cout << "radius = "<< _radius <<  endl;
    }

private:
    int _radius;
};




int main1() {

    Circle c(1, 2, 3);

    Shape *ps = &c;
    ps -> draw(); // 以前如果没有虚函数，会打印出 “draw from (1,2)”， 现在加了虚函数后打印出“start from (1,2)radius = 3”, 虽然是父类的指针，但是表现的是子类的行为


    ps = new Rect(3, 4, 5, 6);
    ps -> draw();   // "start from (3,4)len = 5 wid = 6"  -》 没有在体现出父类的特性了，这中现象叫做动多态


    return 0;
}





#if 0
// 其他扩展
class A
{
public:
    virtual void func()
    {
        cout << "aaaaaa"<< endl;
    }
};

class B:public A  // 别看B中啥没有，其实它继承了A中的 virtual void func()
{

};

class C:public B
{
public:
    virtual void func()
    {
        cout << "cccccc" << endl;
    }
};

int main()
{
    C c;
    A *pa = &c;
    pa ->func();  // 结果是：cccccc
}
#endif;




