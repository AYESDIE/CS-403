/**
 *  Write a class item to count and display the number of objects created.
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
