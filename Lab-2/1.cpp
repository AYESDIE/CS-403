//
// Created by ayush on 22-07-2018.
//

#include "1.h"
#include <iostream>


// Public
// Constructor
Complex::Complex() {
    set(1,1);
}

Complex::Complex(float r, float i) {
    set(r,i);
}

Complex::Complex(const Complex &obj) {
    set(obj.real,obj.img);
}

// Destructor
Complex::~Complex() {
    set(0,1);
}


// Functions
void Complex::set(float r, float i){
    real=r;
    img=i;
}

void Complex::print() const {
    std::cout<< "(" << real;
    (img<0)?std::cout<<" ":std::cout<<" +";
    std::cout<< img <<"i) ";
}


// Operators
Complex Complex::operator+(const Complex &obj) {
    Complex result;
    result.real = (this->real + obj.real);
    result.img = (this->img + obj.img);
    return result;
}

std::ostream& operator<<(std::ostream &os, const Complex& obj){
    obj.print();
    return os;
}

std::istream& operator>>(std::istream &is, Complex& obj){
    std::cout<<"Enter Real Part: ";
    is >> obj.real;
    std::cout<<"Enter Imaginary Part: ";
    is >> obj.img;
    return is;
}