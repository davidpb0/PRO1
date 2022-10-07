#include <iostream>
using namespace std;

int main (){
	
	int n;
	int contot = 0;
	int contneg = 0;
	int contpos = 0;

	while (cin >> n) {
		if (n != 0){
			if (n < 0) ++contneg;
			else ++contpos;

		} else ++contot;	

	}
	cout << "Pos:" << " " << contpos << endl;
	cout << "Neg:" << " " << contneg << endl;
	cout << "Tot:" << " " << contot + contneg + contpos << endl;


	

}