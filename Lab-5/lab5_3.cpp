/**
 * WAP to evaluate the equation A = B * S, where A and B are objects of same
 * class and S is a scalar. Use friend function.
 */
#include <iostream>

using namespace std;

class multop{
  int a;
  double b;
public:
  multop() {}
  multop(int a, double b) : a(a), b(b) {}
  virtual ~multop(){}

  friend multop operator*(const multop &lhs, const int &rhs){
    int p;
    double q;
    p = lhs.a*rhs;
    q = lhs.b*rhs;
    return multop(p,q);
  }

  void show(){
    std::cout<<"< "<<a<<" , "<<b<<" >";
  }
};

int main(){
  multop a,b;
  int p,s;
  double q;
  std::cout<<"\n>>Enter p and q\n";
  std::cin>>p>>q;
  std::cout<<"\n>>Enter scalar s\n";
  std::cin>>s;
  a = multop(p,q);
  b = a * s;
  a.show();
  std::cout<<" * "<<s<<" = ";
  b.show();
  return 0;
}