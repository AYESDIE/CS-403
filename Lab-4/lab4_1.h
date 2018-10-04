//
// Created by ayush on 03-10-2018.
//

#ifndef LAB4_LAB4_1_H
#define LAB4_LAB4_1_H


#include <ostream>

class lab4_1 {
private:
    int a,b,c;
public:
    lab4_1(int a, int b, int c);
    lab4_1(lab4_1 &obj);

    friend std::ostream &operator<<(std::ostream &os, const lab4_1 &lab41);
};


#endif //LAB4_LAB4_1_H
