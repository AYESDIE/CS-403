/**
 * WAP to create a template function to swap two numeric variables
 */
#include<iostream>

using namespace std;

template<typename T>
void sw(T &x, T&y)
{
    T temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a,b;
    float c,d;
    cout<<"\n>> Enter the two integer values\n";
    cin>>a>>b;
    cout<<"\n>> Enter two float values\n";
    cin>>c>>d;
    cout<<"\n>> The values of a and b before swapping"<<"\n>> a= "<<a<<"\n>> b= "<<b<<"\n";
    sw(a,b);
    cout<<"\n>> The values of a and b after swapping"<<"\n>> a= "<<a<<"\n>> b= "<<b<<"\n";
    cout<<"\n>> The values of c and d before swapping"<<"\n>> c= "<<c<<"d\n>> = "<<d<<"\n";
    sw(c,d);
    cout<<"\n>> The values of c and d after swapping"<<"\n>> c= "<<c<<"\n>> d= "<<d<<"\n";
    return 0;
}
