/**
 * WAP to declare your virtual function and override function.
 */
#include<iostream>

using namespace std;

class A {
public:
  int a=12;
  virtual void show() {
    cout<<"\nThe pointer of the base class:";
    cout<<"\na: "<<a;
  }
};

class B:public A {
public:
  int d=37;
  void show() {
    cout<<"\nThe derived class pointer:";
    cout<<"\na: "<<a;
    cout<<"\nd: "<<d;
  }
};

int main() {
  A a;
  A *bptr=&a;
  bptr->show();
  B b;
  bptr=&b;
  bptr->show();
  return 0;
}
