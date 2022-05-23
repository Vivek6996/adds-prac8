#include <string>
#include <sstream>
#include <vector>
#include "Node.h"
#include "LinkedList.h"

int main(){
  std::vector<std::string> li2 = { };

  std::string in;
  
  getline(std::cin, in);
  std::stringstream str_strm;

  str_strm << in;

  std::string temp_str;

  while(!str_strm.eof()) 
  {
    str_strm >> temp_str;
    li2.push_back(temp_str);
  }


  int arr[100] = {};

  int a = (li2.size() - 3);
  for (int i = 0; i < a; i++) {
    arr[i] = stoi(li2[i]);
  }

  std::string function = li2[li2.size() - 3];
  int ob = stoi(li2[li2.size() - 2]);
  int ob2 = stoi(li2[li2.size() - 1]);

  LinkedList * li = new LinkedList(arr, (li2.size() - 3));
  
  if (function == "AF") {
    li ->addFront(ob);
  } else if (function == "AE") {
    li ->addEnd(ob);
  } else if (function == "AP") {
    li ->addAtPosition(ob, ob2);
  } else if (function == "S") {
    li ->search(ob);
  } else if (function == "DF") {
    li ->deleteFront();
  } else if (function == "DE") {
    li ->deleteEnd();
  } else if (function == "DP") {
    li ->deletePosition(ob);
  } else if (function == "GI") {
    li ->getItem(ob);
  } 

  li ->printItems();

  return 0;
}
