/*
Class: CPSC 122-02
Stella Beemer
GU Username: sbeemer2
Submitted By: Stella Beemer
GU Username:
File Name: project7.cpp
Function file for a linked list with head and tail pointers  
To Build: g++ project7Tst.cpp project7.cpp 
To Execute: ./a.out
*/
#include <iostream>
using namespace std;

#include "project7.h"

List1::List1() {
    head = NULL;
    tail = NULL;
    length = 0;
}

List1::~List1() {
    while(length > 0)
        DeleteItemH();
}

bool List1::IsEmpty() const {
    return (length == 0);
}

int List1::GetLength() const {
    return length;
}

void List1::PutItemH(const itemType newItem) {
    node* tmp = new node;
    tmp->item = newItem;
    tmp->next = head;
    head = tmp;
    length++;
    tmp = NULL;
}

itemType List1::GetItemH() const {
    return head->item;
}

void List1::DeleteItemH() {
    node* tmp = head->next;
    delete head;
    head = tmp;
    tmp = NULL;
    length--;
}

void List1::PutItemT(const itemType newItem) {
    node* tmp = new node;
    tmp->item = newItem;
    tail->next = tmp;
    tail = tmp;
    tmp->next = NULL;
    tmp = NULL;
    length++;
}

void List1::Print() const {
    node* tmp = head;
    while(tmp != NULL) {
        cout << tmp->item << endl;
        tmp = tmp->next;
    }
}