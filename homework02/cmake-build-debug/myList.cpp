//
// Created by xiaochen on 2019-06-03.
//

#include "myList.h"
#include <stdio.h>
#include <iostream>
using namespace std;

List::List()
{
    head = new Node;
    head->next = NULL;

}


List::~List()
{
    Node * t = head;
    while (head)
    {
        head = head->next;
        delete t;
        t = head;
    }
}



void List::insertList(int d)
{
    Node * cur = new Node;
    cur->data = d;  //节点值
    cur->next = head->next;  //节点指向上个节点指向的
    head->next = cur;  //修改之前节点的下一个next指针

}



void List::traverseList()
{
    Node * ph = head -> next;
    while(ph != NULL)
    {
        cout << ph->data << endl;
        ph = ph->next;
    }
}
