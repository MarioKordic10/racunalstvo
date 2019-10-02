#include <iostream>
#include <cstdlib>
using namespace std;
float manjibroj(int a,int b)
{
	int manji;
	if(a<b)
	{	
	    manji=a;
    }
    else 
    {
    	manji=b;
    }
    return manji;
}
   int main()
{  
   cout<<"Ovo je program koji izmedju dva broja ispisuje manji.Brojevi moraju biti razliciti: "<<endl;  
    int x,y,rjesenje;
    cout<<" Unesi prvi broj: "<<endl;
    cin>>x;
   cout<<"Unesi drugi broj: "<<endl;
   cin>>y;
   rjesenje=manjibroj(x,y);
   cout<<"Manji broj je: "<<rjesenje<<endl;
   return 0;
}
