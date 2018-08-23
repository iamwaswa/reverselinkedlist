#include "LinkedListNode.h"

int main(int argc, char const *argv[])
{
    LinkedListNode node(1);
    LinkedListNode secondNode(2);
    LinkedListNode thirdNode(3);
    LinkedListNode fourthNode(4);
    LinkedListNode fifthNode(5);
    LinkedListNode sixthNode(6);
    LinkedListNode seventhNode(7);
    LinkedListNode eighthNode(8);
    LinkedListNode ninthNode(9);

    node.next = &secondNode;
    secondNode.next = &thirdNode;
    thirdNode.next = &fourthNode;
    fourthNode.next = &fifthNode;
    fifthNode.next = &sixthNode;
    sixthNode.next = &seventhNode;
    seventhNode.next = &eighthNode;
    eighthNode.next = &ninthNode;

    LinkedListNode* headPtr = &node;

    printList(headPtr);

    headPtr = reverseList(headPtr);

    printList(headPtr);
    
    return 0;
}
