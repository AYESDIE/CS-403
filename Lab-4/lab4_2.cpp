/**
 * WAP to declare a class with three data members. Declare overloaded
 * constructors with no arguments,two arguments and three arguments.Pass
 * values in the object declaration statement.Create four objects and pass
 * values in such a way that the entire four constructors are executed.Write
 * appropriate messages in constructor and destructor.
 */
#include <iostream>

using namespace std;

class lab4_2 {
  int a,b,c;
public:
  lab4_2(int a);
  lab4_2(int a, int b);
  lab4_2(int a, int b, int c);
  lab4_2();

  virtual ~lab4_2();

};

lab4_2::lab4_2(int a) : a(a) {
  cout<<"\n1 params";
}

lab4_2::lab4_2(int a, int b) : a(a), b(b) {
  cout<<"\n2 params";
}

lab4_2::lab4_2(int a, int b, int c) : a(a), b(b), c(c) {
  cout<<"\n3 params";
}

lab4_2::lab4_2() {
  cout<<"\nno params";
}

lab4_2::~lab4_2() {
  cout<<"\ndestructor";
}

int main(){
  lab4_2 a,b(1),c(3,2),d(1,2,3);
  return 0;
}