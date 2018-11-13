/**
 * Write a program to show the arithmetic operations
 */
#include <iostream>

using namespace std;

int main(){
  int a,b;
  cout<<"\n>> Enter a,b: ";
  cin>>a>>b;
  cout<<"\n>> "<<a<<" + "<<b<<" = "<< a + b;
  cout<<"\n>> "<<a<<" - "<<b<<" = "<< a - b;
  cout<<"\n>> "<<a<<" * "<<b<<" = "<< a * b;
  cout<<"\n>> "<<a<<" / "<<b<<" = "<< a / b;
  cout<<"\n>> "<<a<<" % "<<b<<" = "<< a % b;
  return 0;
}