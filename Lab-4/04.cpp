/**
 * WAP to declare a class with private data members. Accept data through
 * constructor and display the data with destructor.
 */
#include <iostream>

class boo{
  int p;
public:
  boo() {
    std::cout<<">> p: ";
    std::cin>>p;
  }

  virtual ~boo() {
    std::cout<<"p: "<<p;
  }
};

int main(){
  boo p;
  return 0;
}