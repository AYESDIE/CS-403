//
// Created by ayush on 03-10-2018.
//

#ifndef LAB4_LAB4_5_H
#define LAB4_LAB4_5_H

int fact2(int t){
    int p=1;
    for (; t!=0 ; t--) {
        p=p*t;
    }
    return p;
}

class fact{
    int p;

public:
    fact() {
        p=1;
    }
    fact(int p) : p(p) {

        fact x;
        if(p!=1){
            x = fact(p-1);
        }
        p *= x.get();
    }

    int get(){
        p = fact2(p);
        return p;
    }
};

#endif //LAB4_LAB4_5_H
