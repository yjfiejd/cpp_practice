//
// Created by xiaochen on 2019-06-03.
//

#ifndef INC_03MYSTRING_MYSTRING_H
#define INC_03MYSTRING_MYSTRING_H

#include <stdio.h>

class String {

public:

    String(const char *p = NULL);  //构造器用于初始化  // 默认参数只能出现在声明中，不能再定义中
    String(const String & another);  // 拷贝构造器

    ~String();

    char * c_str();



private:

    char * _str;  // 字符指针，char* 是指针 指向一串 数据  // char 是基本数据类型, 就是 一个字节

};


#endif //INC_03MYSTRING_MYSTRING_H
