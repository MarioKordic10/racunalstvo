#include <iostream> 								
using namespace std; 

	int zamj(int *a, int *b) { 
	int temp=*a; 
	*a=*b; 
	*b=temp; 
} 

	int sel_Sort(int niz[], int i) { 
	int x, y, minBroj; 
	
	for (x=0; x<i-1; x++) { 						
		minBroj=x; 							
		for (y=x+1; y<i; y++) 						
		if (niz[y]<niz[minBroj]) 				
			minBroj=y; 						
			
	zamj(&niz[minBroj], &niz[x]);				
	} 
} 

	int ispis(int niz[], int duljina) {				
	int x; 											
	for (x=0; x<duljina; x++) 						
		cout<<niz[x]<<" "; 							
	cout<<endl; 									
} 								

	int main() { 								
	int niz[10] = {11,2,5,43,44,67,55,6,9,111};  
	int i=sizeof(niz)/sizeof(niz[0]); 				
	sel_Sort(niz, i); 							
	cout<<"Sortirani niz: \n"; 						
	ispis(niz, i); 									
	
	system("pause");
	return 0;
} 
