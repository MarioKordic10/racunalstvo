#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main(){
    string predmet;
	float ukupno_ocjena, ocjena_1, ocjena_2, ocjena_3, ocjena_4;
	ifstream citaj("D:\\MarioKordicGruzic\\predmeti.txt");
	citaj>>predmet;
	citaj>>ukupno_ocjena;
	citaj>>ocjena_1;
	citaj>>ocjena_2;
	citaj>>ocjena_3;
	citaj>>ocjena_4;
	cout<<" Iz predmeta " << predmet << " imam " << ukupno_ocjena << " ocjena. Ocjene su " << ocjena_1 <<" "<< ocjena_2 <<" "<< ocjena_3 <<" "<< ocjena_4 << " "<<endl;  
	cout<<" Prosjek ocjena je: " <<(ocjena_1+ocjena_2+ocjena_3+ocjena_4)/ukupno_ocjena<<endl;
    system("PAUSE");
	return 0;
}
