/**
 * WAP to create a virtual destructor
 */
 
#include<iostream>

using namespace std;

class B {
public:
  B() {
    cout<<"\nConstructing B ";
  }
  virtual ~B() {
    cout<<"\nDestructing B ";
  }
};

class D : public B {
public:
  D() {
    cout<<"\nConstructing D ";
  }
  ~D() {
    cout<<"\nDestructing D ";
  }
};

int main() {
  D *d= new D();
  B *b=d;
  delete b;
  return 0;
}
