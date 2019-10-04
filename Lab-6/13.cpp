/*!
 * WAP to open a file and use put and get to read and write.
 */

#include <iostream>
#include <fstream>
using namespace std;

int main () {
    ofstream fout;
    char k[1000];
    fout.open ("lab6_13.md");
    cout<<"\n>> Writing:\n";
    gets(k);
    for (int i = 0; k[i] != '\0' ; ++i) {
        fout<< k[i];
    }
    fout << "\0";
    fout.close();
    ifstream fin;
    fin.open ("lab6_13.md");
    cout<<"\n>> Reading:\n";
    char p[1000];
    fin >> p;
    puts(p);
    fin.close();
    return 0;
}