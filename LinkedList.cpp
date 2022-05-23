#include "Node.h"
#include "LinkedList.h"
#include <iostream>
#include <limits>
#include <string>



LinkedList::LinkedList() {

  head = NULL;

}

LinkedList::LinkedList(int array[], int size) {

head = NULL;

    for (int i = 0; i < size; i++) {
        addEnd(array[i]);                     
    }

}



void LinkedList::addFront(int newItem) {

  Node * nHead = new Node();

  nHead -> setData(newItem);
  if (head == NULL) {
    head = nHead;
  } else {

    nHead -> setNext(head);
    head = nHead;

  }
}



void LinkedList::addEnd(int newItem) {

  Node* end = new Node();
  end -> setData(newItem);

  Node* n1 = head;

  while (n1 -> getNext()!= NULL) {

    n1 = n1 -> getNext();

   }

  end -> setNext(NULL);
  n1 -> setNext(end);

}



void LinkedList::addAtPosition(int position, int newItem) {

  Node * n1 = head;
  int size = 0;

  while (n1 -> getNext() != NULL) 
  {
    n1 = n1 -> getNext();
    size++;
  }

  if (position < 1)
  {
    addFront(newItem);

  } else if (size < position) 
  {
    addEnd(newItem);

  } else 
  {
    Node * mid = new Node();
    mid -> setData(newItem);

    Node * n2 = head;
    for (int i = 0; i < position - 2; i++) {
      n2 = n2 -> getNext();
    }
    mid -> setNext(n2 -> getNext());
    n2 -> setNext(mid);
  }

}



int LinkedList::search(int item) {
  int n = 1;
  Node * n1 = head;

  while (n1 != NULL) 
  {
    if (n1 -> getData() == item) 
    {
      std::cout << n << " ";
      return n;
    }
    n++;

    n1 = n1->getNext();

  }
  std::cout << 0 << " ";
  return 0;
}




void LinkedList::deleteFront() {

  head = head -> getNext();

}



void LinkedList::deleteEnd() {
  Node * n1 = head;

  while (n1 -> getNext() -> getNext() != NULL)
  {
    n1 = n1 -> getNext();
  }
  n1 -> setNext(NULL);
}



void LinkedList::deletePosition(int position) {
  Node * n1 = head;
  int size = 0;

  while (n1 -> getNext() != NULL) 
  {

    n1 = n1->getNext();
    size++;

  }

  if (position < 1 || position > size) {
    std::cout<<"outside range ";
  } else 
  {
    Node * n2 = head;
    for (int i = 0; i < position - 2; i++) {
      n2 = n2->getNext();
    }
    n2 -> setNext(n2 -> getNext() -> getNext());
  }
}



int LinkedList::getItem(int position) {

  Node * n1 = head;
  int size = 0;

  while (n1 -> getNext() != NULL) 
  {
    n1 = n1->getNext();
    size++;
  }

  if (position > size) 
  {
    std::cout << std::numeric_limits< int >::max() << " ";

    return std::numeric_limits< int >::max();

  } else 
  {
    Node * n2 = head;
    for (int i = 0; i < position - 1; i++) 
    {
      n2 = n2->getNext();
    }
    std::cout << n2 -> getData()<< " ";
    return n2 -> getData();
  }
}



void LinkedList::printItems() {
  Node * n = head;

  while(n != NULL) 
  {
    std::cout << n -> getData()<< " ";
    n = n -> getNext();
  }
  std::cout << std::endl;
}



LinkedList::~LinkedList() {

}