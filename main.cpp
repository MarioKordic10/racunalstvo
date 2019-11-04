#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
	//Znakovni niz
    int i;
	char X[]="Racunalstvo zadaca";
	for(i=0;i<18;i++) 
	{
    	cout<<"X["<<i<<"]="<<X[i]<<" "<<endl;
	}
	
	//Prvih 7 znakova
	for(i=0;i<7;i++)
	{
	    cout<<"X["<<i<<"]="<<X[i]<<" "<<endl;
	}
	
	//Naopaki niz
for(i=18;i>=0;i--)
   {
        cout<<"X["<<i<<"]="<<X[i]<<" "<<endl;
   }
   return 0;
   
    	
}
