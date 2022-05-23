#include <string>
#include <sstream>
#include <vector>
#include "Node.h"
#include "LinkedList.h"

int main(){

  std::vector<std::string> li2 = { };


  int arr[100] = {};

  int a = (li2.size()-3);
  for (int i = 0; i < a; i++) {
    arr[i] = stoi(li2[i]);
  }

  std::string x = li2[li2.size() - 3];
  int ob = stoi(li2[li2.size() - 2]);
  int ob2 = stoi(li2[li2.size()-1]);

  LinkedList * li = new LinkedList(arr, (li2.size() - 3));
  
  if (x == "AF") 
  {
    li ->addFront(ob);
  } else if (x == "AE") 
  {
    li ->addEnd(ob);
  } else if (x == "AP") 
  {
    li ->addAtPosition(ob, ob2);
  } else if (x == "S") 
  {
    li ->search(ob);
  } else if (x == "DF") 
  {
    li ->deleteFront();
  } else if (x == "DE") 
  {
    li ->deleteEnd();
  } else if (x == "DP") 
  {
    li ->deletePosition(ob);
  } else if (x == "GI") 
  {
    li ->getItem(ob);
  } 

  li ->printItems();

  return 0;
}
