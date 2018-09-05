#include <iostream>
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"

void lab2_1() {
    std::cout<<"lab 2_1\n\n";
    Complex a,b,res;
    int temp;
    std::cin>>a>>b;
    std::cout<<"\n-->Entered complex numbers<--\n";
    std::cout<<a<<"\n"<<b;

    if(a==b)
        std::cout<<"\n-->They are equal<--\n";
    else
        std::cout<<"\n-->They are not equal<--\n";

    res = a+b;
    std::cout<<a<<" + "<<b<<" = "<<res<<"\n";
}

void lab2_2(){
    std::cout<<"\nlab2_2\n\n";
    temp a,b,c,d;
}

void lab2_3(){
    std::cout<<"\nlab2_3\n\n";
    string name="Ayush";
    bankUser a(name);
    cout<<a;
    a.withdraw(20000);
    a.deposit(25000);
    a.withdraw(20000);
};

void lab2_4(){
    privatetester a;
    a.privateaccess();
}

void lab2_5(){
    x a(100);
    y b(30);
    std::cout<<"\n>> x:"<<a.getA()<<"\n>> y:"<<b.getB();
    swap(a,b);
    std::cout<<"\n>> Swapped";
    std::cout<<"\n>> x:"<<a.getA()<<"\n>> y:"<<b.getB();

}

int main(){
    lab2_5();
    return 0;
}