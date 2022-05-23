#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

class Node {
    public:
    Node();
    void setData(int integer);
    int getData();
    void setNext(Node * value);
    Node* getNext();

    private:
    Node * next; 
    int data;
};
#endif
