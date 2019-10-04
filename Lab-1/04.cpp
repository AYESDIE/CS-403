/**
 *  Write a program to count the number of object created using
 *  static variable and functions.
 */

#include <iostream>

class temp{
private:
  int x;
public:
  temp();
  ~temp();
  void show();
};

temp::temp() {
  x=0;
  show();
}

temp::~temp() {
  x=0;
}

void temp::show() {
  static int count=0;
  std::cout<<"\n>> object verified  "<<count+1;
  count++;
}

int main(){
  temp a,b,c,d;
  return 0;
}
