/**
 *  Declare a namespace, use a function to access that namespace and manipulate the integers in it
 */

#include <iostream>

namespace k{
    int i=10;
    int j=20;
}

namespace p{
    int maxi(int a,int b){
        return (a>b)?a:b;
    }
}

namespace q{
    int lel(){
        std::cout<<"\n>> maxi: "<<p::maxi(k::i,k::j);
    }
}

int main(){
    q::lel();
    return 0;
}