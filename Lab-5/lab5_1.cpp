/**
 * WAP to overload < operator and display the smallest number of the two object.
 */
#include <iostream>

class less{
  int a,b;
public:
  less() {}
  less(int a,int b) : a(a), b(b) {}
  virtual ~less() {}

  bool operator<(const less &rhs) const {
    return ((a+b) < (rhs.a+rhs.b));
  }

  friend std::ostream &operator<<(std::ostream &os, const less &less1) {
    os  << less1.a << " + " << less1.b;
    return os;
  }
};

int main() {
  less a,b;
  int p,q,r,s;
  std::cout<<"\n>>Enter p and q\n";
  std::cin>>p>>q;
  a = less(p,q);
  std::cout<<"\n>>Enter r and s\n";
  std::cin>>r>>s;
  b = less(r,s);
  if(a<b){
    std::cout<<a<<" is less than "<<b;
  }
  else{
    std::cout<<b<<" is less than "<<a;
  }
  return 0;
}