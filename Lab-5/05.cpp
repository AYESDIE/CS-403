/**
 * WAP to overload binary - operator and display the result of two complex
 * type objects.
 */
#include <iostream>

class complex{
  int a,b;
public:
  complex(int a, int b) : a(a), b(b) {}
  complex() {}
  virtual ~complex() {
  }

  complex operator-(const complex &bx){
    complex p;
    p.a = this->a - bx.a;
    p.b = this->b - bx.b;
    return p;
  }

  friend std::ostream &operator<<(std::ostream &os, const complex &complex1) {
    os << complex1.a << " and " << complex1.b <<"i";
    return os;
  }
};

int main(){
  int p,q,r,s;
  std::cout<<"\n>>Enter p and q\n";
  std::cin>>p>>q;
  std::cout<<"\n>>Enter r and s\n";
  std::cin>>r>>s;
  complex a(p,q),b(r,s);
  complex t = a-b;
  std::cout<<a<<"  -  "<<b<<"  =  "<<t;

  return 0;
}