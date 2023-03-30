#ifndef __LIST_HEADER_
#define __LIST_HEADER_

#include <iostream>
#include <memory>
#include <vector> 
using namespace std ; 

struct List
{
 struct Node
 {
 int data;
 unique_ptr<Node> next;
 };
 unique_ptr<Node> head;
 ~List() {
 // add code here
    while(head){
        head = move(head->next);
    }
 }
 void push(int data) {
    auto newNode = make_unique<Node>();
    newNode->data = data;
    newNode->next = move(head);
    head = move(newNode);
    }
};

#endif