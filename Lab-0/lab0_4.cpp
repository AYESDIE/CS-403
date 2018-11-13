/**
 * Write a program to convert GB to MB
 * Using convention 1 GB = 1024 MB
 */
#include <iostream>

using namespace std;

float mb(float gb){
  return (gb*1024);
}

int main(){
  float gb;
  cout<<">> Enter GB: ";
  cin>>gb;
  cout<<"\n>> "<<mb(gb)<<" MB";
  return 0;
}