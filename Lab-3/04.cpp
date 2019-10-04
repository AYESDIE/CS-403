/**
 * Write a class to represent a vector(a series of float values).Include
 * member functions to perform the following tasks:
 * 1.To create the vector.
 * 2.to modify the value of the given element.
 * 3.To multiply by scalar value.
 * 4.To display the vector in the form(10,20,30...).
 */

#include <vector>
#include <ostream>
#include <iostream>

using namespace std;

class lol{
  std::vector<int> s;
public:
  lol(const std::vector<int> &s) : s(s) {}
  lol() {}

  virtual ~lol() {

  }

  void update(int index,int data){
    s[index]=data;
  }

  void multiply(int x){
    for (int i = 0; i < s.size(); ++i) {
      s[i]*=x;
    }
  }

  friend std::ostream &operator<<(std::ostream &os, const lol &lab34) {
    os << "(";
    os<< lab34.s[0];
    for (int i = 1; i < lab34.s.size(); ++i) {
      os << ", " << lab34.s[i];
    }
    os << ") ";
    return os;
  }
};

int main(){
  int p,q;
  vector<int> m({1,2,3,4,5,6,7,8,9,10});
  lol a(m);
  cout<<a<<"\n";
  cout<<"\nEnter index and value: ";
  cin>>p>>q;
  a.update(p,q);
  cout<<a<<"\n";
  cout<<"\nEnter value: ";
  cin>>p;
  a.multiply(p);
  cout<<a<<"\n";
  return 0;
}

