/**
 * Write a function to swap the value of 2 variables using reference variables
 */

#include <iostream>

using namespace std;

void swapr(int &a,int &b){
  int t;
  t=a;
  a=b;
  b=t;
}

int main(){
  int a,b;
  cout<<"\n>>Enter A : ";
  cin>>a;
  cout<<"\n>>Enter B : ";
  cin>>b;
  swapr(a,b);
  cout<<"\n>> A= "<<a<<"\n>> B= "<<b;
  return 0;
}