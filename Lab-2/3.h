//
// Created by ayush on 05-09-2018.
//

#ifndef LAB2_3_H
#define LAB2_3_H

#include <string>
#include <ostream>

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

#endif //LAB2_3_H
