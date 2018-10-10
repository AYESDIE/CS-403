//
// Created by ayush on 10-10-2018.
//

#ifndef LAB5_LAB5_1_H
#define LAB5_LAB5_1_H

#include <ostream>

class less{
    int a,b;
public:
    less() {}
    less(int a,int b) : a(a), b(b) {}
    virtual ~less() {}

    bool operator<(const less &rhs) const {
        return ((a+b) < (rhs.a+rhs.b));
    }

    friend std::ostream &operator<<(std::ostream &os, const less &less1) {
        os  << less1.a << " + " << less1.b;
        return os;
    }
};

#endif //LAB5_LAB5_1_H
