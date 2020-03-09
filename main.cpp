//IFSTREAM DATOTEKA = niz.txt
//OFSTREAM DATOTEKA = sumabezpon.txt
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main (){
	ifstream ulaz("D:\\Mario_kordic\\zadatak.txt");
	ofstream izlaz ("D:\\Mario_kordic\\izlazbrojeva.txt");
	 int a[10], suma=0;
 bool dupli[10]={false};
 					//	for (int i=0; i<10; i++) cout << dupli[i] << " - "; 
 for (int i=0; i<10; i++) ulaz >>a[i];
 
 for (int i=0; i<9; i++)
     for (int j=i+1; j<10; j++) 
      if (a[i]==a[j]) dupli[j]=true;
 
 for (int i=0; i<10; i++) 
     if (dupli[i]==false) {
	 	suma=suma+a[i];
     	izlaz << a[i]<< " ";
	 }
 izlaz << endl << "Suma bez ponavljajucih: "<< suma;
 system ("pause");
 return 0; 
}



