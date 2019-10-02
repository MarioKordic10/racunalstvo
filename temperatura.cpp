#include<iostream>
#include<cstdlib>
using namespace std;
 
int main() {
    float temperatura;
    cout<<"Unesi iznos temperature: "<<endl;
    cin>>temperatura;
        if (temperatura>24.5)
              cout<<"Toplo je" <<endl;
		else
		      cout<<"Hladno je" <<endl;
	system ("PAUSE");	      
    return 0;
}
