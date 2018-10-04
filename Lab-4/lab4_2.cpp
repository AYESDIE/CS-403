//
// Created by ayush on 03-10-2018.
//

#include "lab4_2.h"
#include <iostream>
lab4_2::lab4_2(int a) : a(a) {
    std::cout<<"\n1 params";
}

lab4_2::lab4_2(int a, int b) : a(a), b(b) {
    std::cout<<"\n2 params";
}

lab4_2::lab4_2(int a, int b, int c) : a(a), b(b), c(c) {
    std::cout<<"\n3 params";
}

lab4_2::lab4_2() {
    std::cout<<"\nno params";
}

lab4_2::~lab4_2() {
    std::cout<<"\ndestructor";
}
