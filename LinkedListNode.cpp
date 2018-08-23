#include "LinkedListNode.h"

LinkedListNode* reverseList(LinkedListNode* headPtr)
{
    LinkedListNode* oldListFirstNodePtr = headPtr;
    LinkedListNode* newListFirstNodePtr = headPtr;

    while(oldListFirstNodePtr != nullptr)
    {
        if(oldListFirstNodePtr == headPtr && newListFirstNodePtr == headPtr){

            oldListFirstNodePtr = oldListFirstNodePtr->next;
            newListFirstNodePtr->next = nullptr;

        } else {

            headPtr = oldListFirstNodePtr;
            oldListFirstNodePtr = oldListFirstNodePtr->next;
            headPtr->next = newListFirstNodePtr;
            newListFirstNodePtr = headPtr;

        }
    }

    return headPtr;
}

void printList(LinkedListNode* headPtr)
{
    LinkedListNode* currentNodePtr = headPtr;
    while(currentNodePtr != nullptr)
    {
        if(currentNodePtr->next == nullptr){
            cout << currentNodePtr->intValue;
        } else {
            cout << currentNodePtr->intValue << ", ";
        }
        currentNodePtr = currentNodePtr->next;
    }

    cout << endl;
}