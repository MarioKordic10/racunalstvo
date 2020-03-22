#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string R;
	int x;
	int y=1;
	cout<<"Ovo je program koji preuredjuje recenicu koju vi unesete."<<endl;
	cout<<"Unesite recenicu."<<endl;
	getline (cin,R);
	cout<<"Vasa recenica glasi:"<<endl;
	cout<<endl;
	for (x=0; R[x]!='\0'; x++)
	{
		cout<<R[x];
	}
	cout<<endl;
	cout<<endl;
	cout<<"Ovdje ima: ";
	for (x=0; R[x]!='\0'; x++)
	{
		if (R[x]==' ')
		{
			y++;
		}
	}
	cout<<y<<" rijeci."<<endl;
	cout<<"Preuredjena recenica sa zarezima izgleda;"<<endl;
	cout<<endl;
	for (x=0; R[x]!='\0'; x++)
	{
		if (R[x]==' ')
		{
			R[x]=',';
		}	
	}
	cout<<R<<endl;
	return 0;
}
