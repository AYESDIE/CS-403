/**
 *  Write a program to do addition of 2 complex numbers using class.
 */

#include <iostream>

using namespace std;

class Complex{
private:
  float real,img;

public:

  // Constructors
  Complex();
  Complex(float r,float i);
  Complex(const Complex &obj);

  // Destructors
  ~Complex();


  // Functions
  void set(float r,float i);
  void  print() const;



  // Operators
  Complex operator+(const Complex& obj);

  friend 	ostream& operator<<(ostream &os, const Complex& obj);
  friend 	istream& operator>>(istream &is, Complex& obj);
};

// Public
// Constructor
Complex::Complex() {
  set(1,1);
}

Complex::Complex(float r, float i) {
  set(r,i);
}

Complex::Complex(const Complex &obj) {
  set(obj.real,obj.img);
}

// Destructor
Complex::~Complex() {
  set(0,1);
}


// Functions
void Complex::set(float r, float i){
  real=r;
  img=i;
}

void Complex::print() const {
  std::cout<< "(" << real;
  (img<0)?std::cout<<" ":std::cout<<" +";
  std::cout<< img <<"i) ";
}


// Operators
Complex Complex::operator+(const Complex &obj) {
  Complex result;
  result.real = (this->real + obj.real);
  result.img = (this->img + obj.img);
  return result;
}

ostream& operator<<(ostream &os, const Complex& obj){
  obj.print();
  return os;
}

istream& operator>>(istream &is, Complex& obj){
  cout<<"Enter Real Part: ";
  is >> obj.real;
  cout<<"Enter Imaginary Part: ";
  is >> obj.img;
  return is;
}

int main(){
  Complex a,b,res;
  cin>>a>>b;
  cout<<"\n-->Entered complex numbers<--\n";
  cout<<a<<"\n"<<b;
  res = a+b;
  cout<<"\n"<<a<<" + "<<b<<" = "<<res<<"\n";
  return 0;
}