//
// Created by ayush on 29-08-2018.
//

#include "2.h"
#include <iostream>

temp::temp() {
    x=0;
    show();
}

temp::~temp() {
    x=0;
}

void temp::show() {
    static int count=0;
    std::cout<<"\n>> object verified  "<<count;
    count++;
}