/**
 * WAP to pass an object to constructor and carry out copy constructor.
 * Display contents of all the object.
 */

#include <ostream>
#include <iostream>

using namespace std;

class lab4_1 {
private:
  int a,b,c;
public:
  lab4_1(int a, int b, int c);
  lab4_1(lab4_1 &obj);

  friend std::ostream &operator<<(std::ostream &os, const lab4_1 &lab41);
};

lab4_1::lab4_1(int a, int b, int c) : a(a), b(b), c(c) {}

std::ostream &operator<<(std::ostream &os, const lab4_1 &lab41) {
  os << "a: " << lab41.a << " b: " << lab41.b << " c: " << lab41.c;
  return os;
}

lab4_1::lab4_1(lab4_1 &obj) {
  a = obj.a;
  b = obj.b;
  c = obj.c;
}

int main() {
  int a,b,c;
  cout<<"\nEnter a,b,c: \n";
  cin>>a>>b>>c;
  lab4_1 X(a,b,c);
  lab4_1 Y(X);
  cout<<"\nX>> "<<X<<"\nY>> "<<Y;
  return 0;
}