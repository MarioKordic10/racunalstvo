#include <iostream>
#include <stdio.h>
#include <ctype.h>
#define MAX 100
using namespace std;
int main(){
    char niz[MAX];
    
   int x, brojac1=0, brojac2=0;
   cout<<"Unesite string: ";   
   gets(niz);
   for(x=0;niz[x]!='\0';x++)   
   	if(isalpha(niz[x])) brojac1++;
   	else
   	if(isdigit(niz[x])) brojac2++;
   	cout<<"Niz sadrzi " << brojac1 <<" slova.\n";
	cout<<"Niz sadrzi "<< brojac2 <<" brojeva.\n";
	return 0;   
}

