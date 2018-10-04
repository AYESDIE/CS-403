#include <iostream>
#include <vector>
#include "lab3_1.h"
#include "lab3_2.h"
#include "lab3_3.h"
#include "lab3_4.h"
#include "lab3_5.h"
using namespace std;


int lab3_1() {
    vector<int> x;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin>>temp;
        x.push_back(temp);
    }

    count a(x);
    a.evaluate();
    cout << a;
    return 0;
}


int lab3_2() {
    oa a(1);
    oa b(2);
    oa c(3);
    cout << add(a,b,c);
    return 0;
}

int lab3_3(){
    to a,b;
    a.read(100,50);
    b.read(20,100);
    a.diff(b);
    b.diff(a);
}

int lab3_4(){
    std::vector<int> m({1,2,3,4,5,6,7,8});
    lol a(m);
    std::cout<<a<<"\n";
    a.update(2,10);
    std::cout<<a<<"\n";
    a.multiply(10);
    std::cout<<a<<"\n";
}

int lab3_5(){

    DM a;
    DB b;
    a.getdata();
    b.getdata();
    add(a,b);
}

int main(){
    int t;
    cin>>t;
    for (; t!=0 ;) {
        switch (t){
            case 1:
                lab3_1();
                break;
            case 2:
                lab3_2();
                break;
            case 3:
                lab3_3();
                break;
            case 4:
                lab3_4();
                break;
            case 5:
                lab3_5();
                break;
        }
        cin>>t;
    }
}