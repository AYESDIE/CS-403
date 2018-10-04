//
// Created by ayush on 17-09-2018.
//

#ifndef LAB3_LAB3_3_H
#define LAB3_LAB3_3_H

#include <iostream>
using namespace std;
class to{
private:
    int x,y;
public:
    to(){
        x = 0;
        y = 0;
    }

    void read(int a,int b){
        x = a;
        y = b;
    }

    void diff(to c){
        cout<<"\nx: "<<x-c.x;
        cout<<"\ny: "<<y-c.y;
    }
};

#endif //LAB3_LAB3_3_H
