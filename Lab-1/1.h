//
// Created by ayush on 29-08-2018.
//

#ifndef LAB1_1_H
#define LAB1_1_H

#include <cstring>
#include <string>

using std::string;


class book{
private:
    string name;
    float price;
    void set(string n,float p);
public:
    void get();
    void show();
    book();
    ~book();
};



#endif //LAB1_1_H
