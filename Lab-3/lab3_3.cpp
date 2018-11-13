/**
 * WAP to declare a class with two integers. Read values using member
 * function. Pass the object to another member function. Display the
 * difference between them.
 */

#include <iostream>

using namespace std;

class to{
private:
  int x,y;
public:
  to(){
    x = 0;
    y = 0;
  }

  void read(int a,int b){
    x = a;
    y = b;
  }

  void diff(to c){
    cout<<"\nx: "<<x-c.x;
    cout<<"\ny: "<<y-c.y;
  }
};

int main(){
  int w,x,y,z;
  cout<<"enter a.x and a.y >> ";
  cin>>w>>x;
  cout<<"enter b.x and b.y >> ";
  cin>>y>>z;
  to a,b;
  a.read(w,x);
  b.read(y,z);
  a.diff(b);
  b.diff(a);
  return 0;
}