//
// Created by ayush on 05-09-2018.
//

#ifndef LAB2_4_H
#define LAB2_4_H

#include <iostream>
using namespace std;


class privatetester{
    void hello(){
        std::cout<<"\n\n>> Private part of class";
    }

public:
    void privateaccess(){
        hello();
    }
};

#endif //LAB2_4_H
