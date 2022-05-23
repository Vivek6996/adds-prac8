#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Node.h"

class LinkedList{
    public:
        LinkedList();
        LinkedList(int array[], int size);
        void addFront(int newItem);
        void addEnd(int newItem);
        void addAtPosition(int position, int newItem);
        int search(int item);
        void deleteFront();
        void deleteEnd();
        void deletePosition(int position);
        int getItem(int position);
        void printItems();
        ~LinkedList();

      private:
        Node * head;

};




#endif
