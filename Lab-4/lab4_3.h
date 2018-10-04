//
// Created by ayush on 03-10-2018.
//

#ifndef LAB4_LAB4_3_H
#define LAB4_LAB4_3_H

#include <ostream>

class lab3{
    int a,v;
public:
    lab3(int a, int v) : a(a), v(v) {}

    friend std::ostream &operator<<(std::ostream &os, const lab3 &lab31) {
        os << "a: " << lab31.a << " v: " << lab31.v;
        return os;
    }
};

#endif //LAB4_LAB4_3_H
