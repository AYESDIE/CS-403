//
// Created by ayush on 05-09-2018.
//

#include "5.h"
#include <iostream>

x::x(int a) : a(a) {}

x::x() {}

x::~x() {

}

int x::getA() const {
    return a;
}

void x::setA(int a) {
    x::a = a;
}

y::y() {}

y::y(int b) : b(b) {}

y::~y() {

}

int y::getB() const {
    return b;
}

void y::setB(int b) {
    y::b = b;
}

void swap(x &m, y &n) {
   int temp;
   temp = m.getA();
   m.setA(n.getB());
   n.setB(temp);
}