//    1) create a class book, with name price
//            define function to take data from user and
//            display the data for 3 books
//
//    2) function to swap the value of 2 variable using reference variable
//
//    3)  class item count and display the number of object created.
//
//
//    4) write a pro to count the number of object created using static var and function



#include <iostream>
#include "1.h"
#include "4.h"


void lab1_1(){
    std::cout<<"\nlab1_1\n\n";
    book a[3];
    for(int i=0;i<=0;i++){
        a[i].get();
    }
    for(int i=0;i<=0;i++){
        a[i].show();
    }
}



void swapr(int &a,int &b){
    int t;
    t=a;
    a=b;
    b=t;
}




void lab1_2(){
    int a,b;
    std::cout<<"\nlab1_2\n\n";
    std::cout<<"\n>>Enter A : ";
    std::cin>>a;
    std::cout<<"\n>>Enter B : ";
    std::cin>>b;
    swapr(a,b);
    std::cout<<"\n>> A= "<<a<<"\n B= "<<b;
}




void lab1_4(){
    std::cout<<"\nlab1_4\n\n";
    temp a,b,c,d;
}


int main(){
    lab1_1();
    lab1_2();
    lab1_4();
    return 0;
}




