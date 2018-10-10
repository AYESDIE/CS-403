//
// Created by ayush on 10-10-2018.
//

#ifndef LAB5_LAB5_5_H
#define LAB5_LAB5_5_H

#include <ostream>

class complex{
    int a,b;
public:
    complex(int a, int b) : a(a), b(b) {}
    complex() {}
    virtual ~complex() {
    }

    complex operator-(const complex &bx){
        a = a-bx.a;
        b = b-bx.b;
    }

    friend std::ostream &operator<<(std::ostream &os, const complex &complex1) {
        os << complex1.a << " and " << complex1.b <<"i";
        return os;
    }
};

#endif //LAB5_LAB5_5_H
