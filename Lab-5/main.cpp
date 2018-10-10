#include <iostream>
#include "lab5_1.h"
#include "lab5_2.h"
#include "lab5_3.h"
#include "lab5_4.h"
#include "lab5_5.h"

int lab5_1() {
    less a,b;
    int p,q,r,s;
    std::cout<<"\n>>Enter p and q\n";
    std::cin>>p>>q;
    a = less(p,q);
    std::cout<<"\n>>Enter r and s\n";
    std::cin>>r>>s;
    b = less(r,s);
    if(a<b){
        std::cout<<a<<" is less than "<<b;
    }
    else{
        std::cout<<b<<" is less than "<<a;
    }
    return 0;
}

int lab5_2(){
    equalto a,b;
    int p,q,r,s;
    std::cout<<"\n>>Enter p and q\n";
    std::cin>>p>>q;
    a = equalto(p,q);
    std::cout<<"\n>>Enter r and s\n";
    std::cin>>r>>s;
    b = equalto(r,s);
    if(a==b){
        std::cout<<a<<" is equal to "<<b;
    }
    else{
        std::cout<<"they are not equal";
    }
    return 0;
}

int lab5_3(){
    multop a,b;
    int p,s;
    double q;
    std::cout<<"\n>>Enter p and q\n";
    std::cin>>p>>q;
    std::cout<<"\n>>Enter scalar s\n";
    std::cin>>s;
    a = multop(p,q);
    b = a * s;
    a.show();
    std::cout<<" * "<<s<<" = ";
    b.show();
    return 0;
}

int lab5_4(){
    int p,q,r,s;
    std::cout<<"\n>>Enter p and q\n";
    std::cin>>p>>q;
    std::cout<<"\n>>Enter r and s\n";
    std::cin>>r>>s;
    unary a(p,q),b(r,s);
    std::cout<<"\n++a :"<<++a<<"\n --b: "<<--b;
    return 0;
}

int main(){
    int p,q,r,s;
    std::cout<<"\n>>Enter p and q\n";
    std::cin>>p>>q;
    std::cout<<"\n>>Enter r and s\n";
    std::cin>>r>>s;
    complex a(p,q),b(r,s);

    std::cout<<a<<"-"<<b<<"="<<a-b;

    return 0;
}