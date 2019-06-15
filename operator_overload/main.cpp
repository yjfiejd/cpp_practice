#include <iostream>
using namespace std;


// 1) 当里面属性是 public的时候
//class Complex
//{
//public:
//    Complex(float x=0, float y=0)
//    :_x(x), _y(y){}
//
//public:
//    float _x;
//    float _y;
//};
//
//
//// 重载了运算符的操作
//Complex operator + (Complex & a, Complex & b)
//{
//    Complex t;
//    t._x = a._x + b._x;
//    t._y = a._y + b._y;
//    return t;
//}


// 2) 当里面的属性的 private的是时候  --> 需要用友元来做
//class Complex
//{
//public:
//    Complex(float x=0, float y=0)
//            :_x(x), _y(y){}
//    // 整个友元类
//    friend Complex operator + (Complex & a, Complex & b);
//
//    void dis()
//    {
//        cout << this->_x << " - " <<this->_y<< endl;
//    }
//
//private:
//    float _x;
//    float _y;
//};
//
//// 重载了运算符的操作
//Complex operator + (Complex & a, Complex & b)
//{
//    Complex t;
//    t._x = a._x + b._x;
//    t._y = a._y + b._y;
//    return t;
//}


// 3）也可以用成员函数的形式
//
//class Complex
//{
//public:
//    Complex(float x=0, float y=0)
//            :_x(x), _y(y){}
//    // 整个友元类
//
//    const Complex operator + (Complex & another);
//
//    void dis()
//    {
//        cout << this->_x << " - " <<this->_y<< endl;
//    }
//
//private:
//    float _x;
//    float _y;
//};
//
//
//// 采用成员函数的形式
//const Complex Complex::operator + (Complex & another)
//{
//    Complex t;
//    t._x = this->_x + another._x;
//    t._y = this->_y + another._y;
//    return t;
//}
//
//
//
//
//
//int main()
//{
//    Complex c1(1, 2), c2(2, 3);
//
////    Complex c = c1 + c2;  // 拷贝构造 -> c之前不存在
//
////    Complex c;
////    c = c1 + c2;  // 这才是赋值，几个对象都是已经创建好的
//
////    Complex c = c1 + c2; // operator+(c1, c2);
//
//    Complex c = c1.operator+(c2); // c1.operator+(c2); 第二种是成员函数的形式
//
//    c1.dis();
//    c2.dis();
//    c.dis();
//
//
//// 返回值注意
////    int i, j, k;
////    (i = j) = k;
////
////    (i + j) = k;
//
//
//}


# if 0

通常情况下:

只有,单目运算符 和 双目运算符可以重载, 三目运算符不行.

单目:
重载为成员函数的话, 需要0个参数
重载为友元的话, 需要1个参数


双目: 两个操作数  +
重载为成员成员函数时候, 仅需要一个参数 : 因为成员暗中包含了一个this指针
const Complex operator + (Complex & another);

重载为友元的时候, 需要两个参数
friend Complex operator + (Complex & a, Complex & b);



不必重载的运算符 (= &)

#endif


// 单目运算符重载
