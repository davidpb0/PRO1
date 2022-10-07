#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> "  " >> c >> d;

	if (a < c < d < b){
		cout << [c,d] << endl;
	}
	else if (c < a < b < d){
		cout << [a,b] << endl;
	}
	else if (c < a < d < b){
		cout << [a,d] << endl;
	}
	else if (a < c < b < d){
		cout << [b,c] << endl;
	}
	else if (a < b < c < d){
		cout << "[]" << endl;
	}



}