/*!
 * WAP to open a file using object and write something in it.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream fout;
    fout.open ("lab6_12.md");
    cout<<"\n>> Writing\n lorem ipsum\n";
    fout << "lorem ipsum\n";
    fout.close();
    return 0;
}