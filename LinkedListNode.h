#ifndef LINKED_LIST_NODE_H
#define LINKED_LIST_NODE_H

#include <iostream>
using namespace std;

class LinkedListNode
{
    public:
        int intValue;
        LinkedListNode* next;
        LinkedListNode(int intValue) : intValue(intValue), next(nullptr) {}
        friend LinkedListNode* reverseList(LinkedListNode* headPtrPtr);
        friend void printList(LinkedListNode* headPtr);
};

#endif