#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{   string recenica;
    ifstream ulaz ("D:\\Mario_kordic\\recenicasasamoglasnicima.txt");
    ofstream izlaz ("D:\\Mario_kordic\\bezsamoglasnika.txt");
    getline (ulaz, recenica);
    int d=recenica.size();
    for (int i=0; i < d;i++) 
        if (recenica [i]!='a' && !='e' && !='i' && !='o' && !='u' && !='A' && !='E' && !='I' && !='O' && !='U')izlaz << recenica [i];
    return EXIT_SUCCESS;
}

