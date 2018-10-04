//
// Created by ayush on 03-10-2018.
//

#ifndef LAB4_LAB4_4_H
#define LAB4_LAB4_4_H

#include <iostream>

class boo{
    int p;
public:
    boo() {
        std::cout<<"Enter>>";
        std::cin>>p;
    }

    virtual ~boo() {
        std::cout<<"p: "<<p;
    }
};
#endif //LAB4_LAB4_4_H
