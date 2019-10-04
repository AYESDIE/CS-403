/**
 *  Write a class to store details of a Bank User.
 *  Store name and the amount he/she hold.
 *  Define withdraw and deposit functions as necessary.
 *  Make sure the user cannot withdraw amount more than the amount in his/her
 *  account.
 */

#include <string>
#include <ostream>
#include <iostream>

using namespace std;

class bankUser{
  string name;
  double current;

public:
  bankUser(const string &name, double current = 10000);
  bankUser();
  virtual ~bankUser();

  void withdraw(double amount);
  void deposit(double amount);

  friend ostream &operator<<(ostream &os, const bankUser &user);
};

bankUser::bankUser(const string &name, double current) : name(name), current(current) {}

bankUser::bankUser() {}

bankUser::~bankUser() {

}

ostream &operator<<(ostream &os, const bankUser &user) {
  os << "\n>> name: " << user.name << "\n>> current balance: " << user.current;
  return os;
}

void bankUser::deposit(double amount) {
  cout<<"\n>> Successfully Deposited.";
  current = current + amount;
  cout<<"\n>> Current Balance: "<< current;
}

void bankUser::withdraw(double amount) {
  if(amount<current){
    cout<<"\n>> Withdraw successful.";
    current = current - amount;
  }
  else{
    cout<<"\n>> Withdraw failed.";
  }
  cout<<"\n>> Current Balance: "<< current;
}

int main(){
  string n;
  cout<<"Enter name>>  ";
  cin>>n;
  bankUser a(n);
  cout<<a;
  int x;
  cout<<"\n Enter withdraw amount:  ";
  cin>>x;
  a.withdraw(x);
  cout<<"\n Enter deposit amount:  ";
  cin>>x;
  a.deposit(x);
  cout<<"\n Enter withdraw amount:  ";
  cin>>x;
  a.withdraw(x);
  return 0;
}