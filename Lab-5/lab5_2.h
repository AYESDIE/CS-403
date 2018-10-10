//
// Created by ayush on 10-10-2018.
//

#ifndef LAB5_LAB5_2_H
#define LAB5_LAB5_2_H

#include <ostream>

class equalto{
    int a,b;
public:
    equalto() {}
    equalto(int a, int b) : a(a), b(b) {}
    virtual ~equalto() {}

    bool operator==(const equalto &rhs) const {
        return (((a == rhs.a) and (b == rhs.b))or((a == rhs.b) and (b == rhs.a)));
    }

    friend std::ostream &operator<<(std::ostream &os, const equalto &equalto1) {
        os << equalto1.a << " , " << equalto1.b;
        return os;
    }


};

#endif //LAB5_LAB5_2_H
