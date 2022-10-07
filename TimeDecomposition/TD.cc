#include <iostream>
using namespace std;

int main(){
	int n, h, m, s;  
	double horas, hm, min, ms, seg;

	cin >> n;

	horas = (n / 3600);
	h = int (horas);
	cout << h << " ";

	hm = horas - h;
	min = (hm * 60);
	m = int (min);
	cout << m << " ";

	ms = min - m;
	seg = (ms * 60);
	s = int(seg);
	cout << s << endl;
 

}