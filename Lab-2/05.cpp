/**
 *  Write a program to swap data members of 2 different class.
 */

#include <iostream>

using namespace std;

class x{
  int a;
public:
  x(int a);
  x();
  virtual ~x();
  int getA() const;
  void setA(int a);
};

class y{
  int b;
public:
  y();
  y(int b);
  virtual ~y();
  int getB() const;
  void setB(int b);
  friend void swap(x &m,y &n);
};


x::x(int a) : a(a) {}

x::x() {}

x::~x() {

}

int x::getA() const {
  return a;
}

void x::setA(int a) {
  x::a = a;
}

y::y() {}

y::y(int b) : b(b) {}

y::~y() {

}

int y::getB() const {
  return b;
}

void y::setB(int b) {
  y::b = b;
}

void swap(x &m, y &n) {
  int temp;
  temp = m.getA();
  m.setA(n.getB());
  n.setB(temp);
}

int main(){
  int xx,yy;
  cout<<"Enter x :";
  cin>>xx;
  cout<<"Enter y :";
  cin>>yy;
  x a(xx);
  y b(yy);
  cout<<"\n>> x: "<<a.getA()<<"\n>> y: "<<b.getB();
  swap(a,b);
  cout<<"\n>> Swapped";
  cout<<"\n>> x: "<<a.getA()<<"\n>> y: "<<b.getB();
  return 0;
}