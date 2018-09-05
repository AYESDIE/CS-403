//
// Created by ayush on 22-07-2018.
//

#ifndef COMPLEX_NUMBERS_COMPLEXNUM_H
#define COMPLEX_NUMBERS_COMPLEXNUM_H

#include <iostream>

class Complex{
    private:
        float real,img;

    public:

        // Constructors
        Complex();
        Complex(float r,float i);
        Complex(const Complex &obj);

        // Destructors
        ~Complex();


        // Functions
        void set(float r,float i);
        void  print() const;



        // Operators
        Complex operator+(const Complex& obj);

        friend 	std::ostream& operator<<(std::ostream &os, const Complex& obj);
        friend 	std::istream& operator>>(std::istream &is, Complex& obj);
};

#endif //COMPLEX_NUMBERS_COMPLEXNUM_H
