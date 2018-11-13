/**
 * WAP to explain the concept of multiple catch statement with generic catch.
 */

#include<iostream>

using namespace std;

void test(int x) {
  try {
    if(x==0)
      throw x;
    if(x==-1)
      throw 'x';
    if(x==1)
      throw 1.0;
  }
  catch(...) {
    cout<<"\nCaught an exception";
  }
}

int main() {
  cout<<"\nTesting Generic Catch";
  test(-1);
  test(0);
  test(1);
  return 0;
}
