#include <iostream>
#include <string>
#include "Node.h"

Node::Node() {


}

void Node::setData(int integer) {
  
  data = integer;

}

void Node::setNext(Node * value) {
 
  next = value;

}

int Node::getData() {
  
  return data;

}

Node* Node::getNext() {
  
  return next;
  
}
