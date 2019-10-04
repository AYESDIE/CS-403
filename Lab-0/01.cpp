/**
 * Write a structure to hold record of students
 */
#include <iostream>
#include <string>

using namespace std;

struct student{
  string name;
  float marks;
};

void print(struct student x){
  cout<<"\n>> "<<x.name<<" "<<x.marks;
}

struct student input(){
  struct student x;
  cout<<">> Enter name: ";
  cin>>x.name;
  cout<<">> Enter marks: ";
  cin>>x.marks;
  return x;
}

int main(){
  struct student p[5];
  int it=2;
  for (int i = 0; i < it; ++i) {
    p[i] = input();
  }
  for (int j = 0; j < it; ++j) {
    print(p[j]);
  }
  return 0;
}