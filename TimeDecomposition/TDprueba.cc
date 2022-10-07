#include <iostream>
using namespace std;

int main(){

	int n, h, m, s;  
	double horas, hm, min, ms, seg;

	cin >> n;

	horas = (n / 3600.0); 
	h = int (horas + 1e-7);

	hm = (horas - h);
	min = (hm * 60.0); 
	m = int (min +1e-7);
	
	ms = (min - m);
	seg = (ms * 60.0); 
	s = int(seg + 1e-7);

	cout << fixed << h << " " << m << " " << s << endl;
 

}