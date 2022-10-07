#include <iostream>
using namespace std;

int main (){

	int a, b, c, d;
	int contIn = 0;
	int contFol = 0;

	while (cin >> a >> b >> c >> d){
	
		if ( a < b and b < c and c < d) ++contIn;
	
		if ( a == c and b == d) ++contFol;

	}

	cout << "Increasing:" << " " << contIn << endl;
	cout << "Folded:" << " " << contFol << endl;
}