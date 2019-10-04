/**
 * WAP to call constructor recursively. Calculate factorical of a given number.
 */

#include <iostream>
using namespace std;

class factorial {
    long int fact;
public:
    factorial(int x) {
        fact = 1;
        cout << "\n>> Factorial: " << Fact(x);
    }

    long int Fact(int x) {
        for(int i = 1; i <= x; ++i)
            fact *= i;

        return fact;
    }
};

int main() {
    int n;
    cout << "\n>> Enter the integer: ";
    cin >> n;
    factorial f(n);
    return 0;
}
