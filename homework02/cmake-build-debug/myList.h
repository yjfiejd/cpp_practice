//
// Created by xiaochen on 2019-06-03.
//

#ifndef HOMEWORK02_MYLIST_H
#define HOMEWORK02_MYLIST_H


struct Node
{
    int data;
    struct Node * next;
};



class List{
public:
    List();  // 构造器 空链表
    ~List(); // 析构器 销毁链表

    void insertList(int d);
    void traverseList();

private:
    Node * head;

};


#endif //HOMEWORK02_MYLIST_H
