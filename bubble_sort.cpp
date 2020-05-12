#include<iostream>										

using namespace std;

int main() {
    int a;												
    cout<<"Unesi koliko brojeva zelis: ";		 
    cin>>a;											
    int niz[a],b,c;										
    
    cout<<"Unesi brojeve: \n";							
	for(b=0; b<a; b++) {							
        cin>>niz[b];									
    }													
    

    for(b=0; b<a-1; b++)								
    {
        for(c=0; c<a-b-1; c++)
        {
            if(niz[c]>niz[c+1])							
            {										
                int temp=niz[c];						
                niz[c]=niz[c+1];						
                niz[c+1]=temp;							
            }
        }
    }
    
    cout<<endl;
    cout<<"Sortirani niz: \n";						
    for(b=0; b<a; b++)									
    cout<<niz[b]<<" ";									
    cout<<endl;

    system("pause");
    return 0;
}
