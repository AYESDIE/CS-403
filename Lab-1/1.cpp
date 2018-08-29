
//
// Created by ayush on 29-08-2018.
//

#include <iostream>
#include <cstring>
#include <string>
#include "1.h"

using std::string;

void book::set(string n, float p) {
    name = n;
    price=p;
}

book::book() {
    string temp;
    set(temp,0);
}

book::~book() {
    string temp;
    set(temp,0);
}

void book::show() {
    std::cout<<"\nDisplaying the data\n>>Name : "<<name<<"\n>>Price: "<<price;
}

void book::get() {
    string n;
    float p;
    std::cout<<"\nEnter the data:\n>>Name : ";
    getline(std::cin,n);
    std::cout<<"\n>>Price: ";
    std::cin>>p;
    set(n,p);
}

