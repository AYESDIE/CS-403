/**
 * WAP to overload ++ and -- operator for prefix and postfix use.
 */
#include <iostream>

class unary{
  int a;
  double b;
public:
  virtual ~unary() {

  }
  unary() {}
  unary(int a, double b) : a(a), b(b) {}

  unary operator++(){
    return unary(a+1,b+1);
  }

  unary operator++(int){
    unary temp(a,b);
    a+=1;
    b+=1;
    return temp;
  }

  unary operator--(){
    return unary(a-1,b-1);
  }

  unary operator--(int){
    unary temp(a,b);
    a-=1;
    b-=1;
    return temp;
  }



  friend std::ostream &operator<<(std::ostream &os, const unary &unary1) {
    os << unary1.a << " , " << unary1.b;
    return os;
  }


};

int main(){
  int p,q,r,s;
  std::cout<<"\n>>Enter p and q\n";
  std::cin>>p>>q;
  std::cout<<"\n>>Enter r and s\n";
  std::cin>>r>>s;
  unary a(p,q),b(r,s);
  std::cout<<"\n++a :"<<++a<<"\n b--: "<<b--;
  return 0;
}