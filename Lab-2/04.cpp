/**
 *  Write a class and access the private functions of that class using its
 *  object.
 */

#include <iostream>
using namespace std;


class privatetester{
  void hello(){
    std::cout<<"\n>> Private part of class";
  }

public:
  void privateaccess(){
    hello();
  }
};

int main(){
  privatetester a;
  a.privateaccess();
  return 0;
}