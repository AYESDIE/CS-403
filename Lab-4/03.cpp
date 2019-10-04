/**
 * WAP to declare a class with two integers. Also declare and define member
 * function to display the content. Display its content using implicit and
 * explicit constructor.
 */
#include <iostream>

using namespace std;

class lab3{
  int a,v;
public:
  lab3(int a, int v) : a(a), v(v) {}

  friend std::ostream &operator<<(std::ostream &os, const lab3 &lab31) {
    os << "a: " << lab31.a << " v: " << lab31.v;
    return os;
  }
};

int main(){
  int x,y;
  cout<<"\nEnter a,v: ";
  cin>>x>>y;
  lab3 c(x,y);
  cout<<"Implicit  "<<c<<"\n";
  cout<<"\nEnter a,v: ";
  cin>>x>>y;
  c = lab3(x,y);
  cout<<"Explicit  "<<c<<"\n";
  return 0;
}