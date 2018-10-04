//
// Created by ayush on 03-10-2018.
//

#ifndef LAB3_LAB3_4_H
#define LAB3_LAB3_4_H

#include <vector>
#include <ostream>

class lol{
    std::vector<int> s;
public:
    lol(const std::vector<int> &s) : s(s) {}
    lol() {}

    virtual ~lol() {

    }

    void update(int index,int data){
        s[index]=data;
    }

    void multiply(int x){
        for (int i = 0; i < s.size(); ++i) {
            s[i]*=x;
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const lol &lab34) {
        os << "( ";
        os<< lab34.s[0];
        for (int i = 1; i < lab34.s.size(); ++i) {
            os << "," << lab34.s[i];
        }
        os << ") ";
        return os;
    }
};

#endif //LAB3_LAB3_4_H
