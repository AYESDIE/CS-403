/**
 * Create a class with private numeric data and define overloaded add
 * function which takes one, two, three or default arguments.
 */
#include <iostream>

using namespace std;

class oa{
private:
  int x;
public:
  oa(int x) : x(x) {}
  oa() {
    x=0;
  }

  int add(){
    return 0;
  }

  friend int add(oa a){
    return a.x;
  }
  friend int add(oa a,oa b){
    return a.x+b.x;
  }
  friend int add(oa a,oa b,oa c){
    return a.x+b.x+c.x;
  }
};

int main(){
  int x,y,z;
  cout<<"Enter x,y,z:\n";
  cin>>x>>y>>z;
  oa a(x),b(y),c(z);
  cout << "\n0="<<a.add();
  cout << "\nx="<<add(a);
  cout << "\nx+y="<<add(a,b);
  cout << "\nx+y+z="<<add(a,b,c);
  return 0;
}