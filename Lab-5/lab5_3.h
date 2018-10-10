//
// Created by ayush on 10-10-2018.
//

#ifndef LAB5_LAB5_3_H
#define LAB5_LAB5_3_H

class multop{
    int a;
    double b;
public:
    multop() {}
    multop(int a, double b) : a(a), b(b) {}
    virtual ~multop(){}

    friend multop operator*(const multop &lhs, const int &rhs){
        int p;
        double q;
        p = lhs.a*rhs;
        q = lhs.b*rhs;
        return multop(p,q);
    }

    void show(){
        std::cout<<"< "<<a<<" , "<<b<<" >";
    }
};

#endif //LAB5_LAB5_3_H
