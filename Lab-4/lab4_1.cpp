//
// Created by ayush on 03-10-2018.
//

#include "lab4_1.h"

lab4_1::lab4_1(int a, int b, int c) : a(a), b(b), c(c) {}

std::ostream &operator<<(std::ostream &os, const lab4_1 &lab41) {
    os << "a: " << lab41.a << " b: " << lab41.b << " c: " << lab41.c;
    return os;
}

lab4_1::lab4_1(lab4_1 &obj) {
    a = obj.a;
    b = obj.b;
    c = obj.c;
}
