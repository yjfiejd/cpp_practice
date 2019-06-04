//
// Created by xiaochen on 2019-06-03.
//

#include "mystring.h"
#include <string.h>

String::String(const char * p)
{
    if(p == NULL)
    {
        _str = new char[1];
        *_str = '\0';
    }
    else
    {
        int len = strlen(p);
        _str = new char[len+1];
        strcpy(_str, p);
    }
}


String::~String()
{
    delete []_str;
}



char * String::c_str()
{
    return _str;
}


// 1, 拷贝构造器，注意格式, A(const A & another);
// 2, 若不提供，系统会提供默认(成功编译), 一旦自定义, 系统不再提供默认
// 3, 系统提供的默认是，一种等位拷贝，也就是浅拷贝
// 4, 浅拷贝会导致，内存重析构， 会出现 double free  -->  how？
//    在有些情况下（含有对空间的时候，要自实现拷贝构造）
// 5,


String::String(const String & another)
{
    // 同类之间，是没有隐私的。
    int len = strlen(another._str);
    _str = new char[len + 1];
    strcpy(_str, another._str);

}