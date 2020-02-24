#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;
int main(int nNumberofArgs, char* pszArgs[])
{
    ofstream my("Baza.txt");
    my << "neznanmstamije"
       << "98"
       << "M"
       << endl;
    return 0;
}
