/**
 * WAP to create a template to find the maximum value stored in an array.
 */
#include<iostream>

using namespace std;

template<class T>
T maxi(T a1[],int n)
{
    T max=a1[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a1[i]>max)
            max=a1[i];
    }
    return max;
}

int main()
{
    int a[]={45,16,42,358,45};
    float b[]={1054.5,20.65,9.9785,8665.470,1007.959};
    cout<<"\nmax1: "<<maxi(a,5);
    cout<<"\nmax2: "<<maxi(b,5);
    return 0;
}
