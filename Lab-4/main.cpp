#include <iostream>
#include "lab4_1.h"
#include "lab4_2.h"
#include "lab4_3.h"
#include "lab4_4.h"
#include "lab4_5.h"

int l1() {
    lab4_1 a(4,2,1);
    lab4_1 b(a);
    std::cout<<a<<"\n"<<b;
    return 0;
}

int l2(){
    lab4_2 a,b(1),c(3,2),d(1,2,3);
    return 0;
}

int l3(){
    lab3 c(4,5);
    std::cout<<c<<"\n";
    c = lab3(9,33);
    std::cout<<c<<"\n";
    return 0;
}

int l4(){
    boo p;
    return 0;
}

int l5(){
    fact p(6);
    std::cout<<p.get();
    return 0;
}


int main(){
    int t;
    std::cin>>t;
    for (; t!=0 ;) {
        switch (t){
            case 1:
                l1();
                break;
            case 2:
                l2();
                break;
            case 3:
                l3();
                break;
            case 4:
                l4();
                break;
            case 5:
                l5();
                break;
        }
        std::cin>>t;
    }
}

