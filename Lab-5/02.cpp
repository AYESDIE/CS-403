/**
 * WAP to overload == operator. Compare two objects using overloaded operator.
 */
#include <iostream>

class equalto{
  int a,b;
public:
  equalto() {}
  equalto(int a, int b) : a(a), b(b) {}
  virtual ~equalto() {}

  bool operator==(const equalto &rhs) const {
    return (((a == rhs.a) and (b == rhs.b))or((a == rhs.b) and (b == rhs.a)));
  }

  friend std::ostream &operator<<(std::ostream &os, const equalto &equalto1) {
    os << equalto1.a << " , " << equalto1.b;
    return os;
  }
};

int main(){
  equalto a,b;
  int p,q,r,s;
  std::cout<<"\n>>Enter p and q\n";
  std::cin>>p>>q;
  a = equalto(p,q);
  std::cout<<"\n>>Enter r and s\n";
  std::cin>>r>>s;
  b = equalto(r,s);
  if(a==b){
    std::cout<<a<<" is equal to "<<b;
  }
  else{
    std::cout<<"they are not equal";
  }
  return 0;
}