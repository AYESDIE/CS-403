//
// Created by ayush on 10-10-2018.
//

#ifndef LAB5_LAB5_4_H
#define LAB5_LAB5_4_H

#include <ostream>

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

    unary operator--(){
        return unary(a-1,b-1);
    }


    friend std::ostream &operator<<(std::ostream &os, const unary &unary1) {
        os << unary1.a << " , " << unary1.b;
        return os;
    }


};

#endif //LAB5_LAB5_4_H
