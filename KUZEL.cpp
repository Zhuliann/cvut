#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){

	string prijmeni, jmeno;
	double s = 0.0, r = 0.0, vyska = 0.0, S = 0.0, V = 0.0;
		
	cout << "Dopln prijmeni:";
	cin >> prijmeni;
	
	cout << "Dopln jmeno:";
	cin >> jmeno;
	
	cout << "Dopln delku strany kuzele:";
	cin >> s;
	
	cout << "Dopln polomer:";
	cin >> r;
	
	if(s > r){
	
	vyska = sqrt (pow (r, 2)+pow (s, 2));
	V = (1.0/3.0) * M_PI * pow (r,2) * vyska;
	S = M_PI * pow (r,2)+M_PI*r*s;	
	
	ofstream Soubor ("Kuzel.txt");
	Soubor << "r =" << r << endl << "s =" << s << endl
			<< "V =" << V << endl<< "S =" << S << endl;
	Soubor.close ();	
	
	}else if(s <= r){
	cout<< "NELZE SESTROJIT" << endl;
	}
	
	return 0;
	
}
