/**
 * Write a program to show Fibonacci Series using recursion and function
 */
#include<iostream>

using namespace std;

int fib(int n) {
  if((n==1)or(n==0)) {
    return(n);
  }
  else {
    return(fib(n-1)+fib(n-2));
  }
}

int main() {
  int n,i=0;
  cout<<">> enter n: ";
  cin>>n;
  cout<<"\n>> Fibonacci Series \n";
  while(i<n) {
    cout<<" "<<fib(i);
    i++;
  }
  return 0;
}