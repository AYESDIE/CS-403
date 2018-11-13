/**
 * Write a program to access the private members like public members using
 * pointers.
 */

#include<iostream>

using namespace std;

class foo {
  int a,b;
public:
  int c;

  foo() {}
  foo(int a, int b, int c) : a(a), b(b), c(c) {}
};

int main() {
  int a,b,c;
  cout<<"\nEnter 3 numbers: ";
  cin>>a>>b>>c;
  foo x(a,b,c);
  int *ad = &x.c;
  cout<<"\n>> Public: ";
  cout<<*ad;
  cout<<"\n>> Private: ";
  cout<<*(ad-1)<<", "<<*(ad-2);
  return 0;
}