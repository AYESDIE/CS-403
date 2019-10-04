/**
 * Program to create a class number which takes an integer and create a
 * function max to find the greater object value between two objects.Use
 * pointers to access the data members and returning the object
 */
#include<iostream>

using namespace std;

class number {
  int a;
public:
  number(int a) : a(a) {}
  friend number max(number x,number y) {
    number *l = &x;
    number *m = &y;
    number *t;
    *t = (l->a>m->a) ? *l:*m;
    return *t;
  }

  friend ostream &operator<<(ostream &os, const number &number1) {
    os << number1.a;
    return os;
  }
};

int main() {
  int a1,a2;
  cout<<"Enter the values of two objects:";
  cin>>a1>>a2;
  number c1(a1),c2(a2);
  number c3=max(c1,c2);
  cout<<"\n>> Greater : "<<c3;
  return 0;
}