/**
 *  Write a class book, with name and price as data members.
 *  Define a function to take data from users and
 *  display the data for 3 books.
 */

#include <cstring>
#include <string>
#include <iostream>

using namespace std;


class book{
private:
  string name;
  float price;
  void set(string n,float p);
public:
  void get();
  void show();
  book();
  ~book();
};

using std::string;

void book::set(string n, float p) {
  name = n;
  price=p;
}

book::book() {
  string temp;
  set(temp,0);
}

book::~book() {
  string temp;
  set(temp,0);
}

void book::show() {
  std::cout<<"\nDisplaying the data\n>>Name : "<<name<<"\n>>Price: "<<price;
}

void book::get() {
  string n;
  float p;
  std::cout<<"\nEnter the data:\n>>Name : ";
  cin>>n;
  std::cout<<"\n>>Price: ";
  std::cin>>p;
  set(n,p);
}

int main(){
  book a,b,c;
  a.get();
  b.get();
  c.get();
  a.show();
  b.show();
  c.show();
  return 0;
}