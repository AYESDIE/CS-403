//
// Created by ayush on 05-09-2018.
//

#include "3.h"
#include <iostream>

using namespace std;

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
