#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	vector<int> v1;
	v1.push_back(3);
	v1.push_back(10);
	v1.push_back(33);
	
	cout<<"Vektori su: ";
	
	for(unsigned int i=0;i<v1.size();i++) {
		cout<<v1[i]<< " ";
	}
	
	cout<<endl;
	
	if (v1.empty()) {
		cout<<"Vektor V1 je prazan.";
	}
	else {
		cout<<"Vektor V1 nije prazan.";
	}
	
	cout<<endl;
	
	vector<int> v2;
	v2.push_back(10);
	
	if (v1.size()!=v2.size()) {
		cout<<"Stari vektor NIJE jednak novom vektoru!";
	}
	else {
		cout<<"Stari vektori jednak je novom vektoru!";
	}
	
	cout<<endl;
	
	v1=v2;
	
	if(v1.size()!=v2.size()) {
		cout<<"Stari vektori NIJE jedan novom vektoru!";
	}
	else {
		cout<<"Stari vektori jednak je novom vektoru!";
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
