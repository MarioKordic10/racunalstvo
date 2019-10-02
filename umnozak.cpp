#include <iostream>
#include <cstdlib>
using namespace std;
float umnozak (float a, float b)
{
	float umnozak;
	umnozak=a*b;
	return umnozak;
}
int main()
{  
   float x,y,rjesenje;
   cout<<"Unesi prvi broj koji ce se pomnoziti: "<<endl;
   cin>>x;
   cout<<"Unesi drugi broj: "<<endl;
   cin>>y;
   rjesenje=umnozak(x,y);
   cout<<"Rjesenje je "<<rjesenje<<endl;
   return 0;
}
