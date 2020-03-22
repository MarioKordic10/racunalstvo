#include <cstdlib>
#include <iostream>
#include <vector> 

using namespace std;

int main() 
{
	int N=1;
	int x=1;
	int i, j;
	vector<int> v;
	cout<<"program koji vam omogucuje unosenje brojeva sve dok ne upisete nulu i ispisuje brojeve koji se ponavljaju"<<endl;
	cout<<"unesi brojeve jedan po jedan, za kraj unesi nulu."<<endl;
	while(N!=0)
	{
	
		cout<<"unesi "<<x<<". broj: ";
		cin>>N;
		v.push_back(N);
		x++;
	
	}
	cout<<endl;
	
	cout << "ponavljajuci brojevi su: " <<endl;
	for (i=0;  i<v.size(); i++)
	{
		for (j=i+1;  j<v.size(); j++)
		{
			if (v[i]==v[j])
			{
				cout<<v[j]<<" ";
				break;
			}
			
		}
	} 
	

	return 0;
}
