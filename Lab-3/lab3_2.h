//
// Created by ayush on 17-09-2018.
//

#ifndef LAB3_LAB3_2_H
#define LAB3_LAB3_2_H

class oa{
private:
    int x;
public:
    oa(int x) : x(x) {}
    oa() {
        x=0;
    }

    friend int add(){
        return 0;
    }

    friend int add(oa a){
        return a.x;
    }
    friend int add(oa a,oa b){
        return a.x+b.x;
    }
    friend int add(oa a,oa b,oa c){
        return a.x+b.x+c.x;
    }
};

#endif //LAB3_LAB3_2_H
