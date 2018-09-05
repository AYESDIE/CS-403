//
// Created by ayush on 05-09-2018.
//

#ifndef LAB2_5_H
#define LAB2_5_H

class x{
    int a;
public:
    x(int a);

    x();

    virtual ~x();

    int getA() const;

    void setA(int a);

};

class y{
    int b;

public:
    y();

    y(int b);

    virtual ~y();

    int getB() const;

    void setB(int b);

    friend void swap(x &m,y &n);

};
#endif //LAB2_5_H
