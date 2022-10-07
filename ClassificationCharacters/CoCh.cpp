#include <iostream>
using namespace std;

int main(){
	char x;
	cin >> x;

	if (x >= 'A' and x <= 'Z' and x == 'A' 'E' 'I' 'O' 'U'){
		cout << "uppercase" << endl;
		cout << "vowel"<< endl;
	}
	else{
		cout << "uppercase" << endl;
		cout << "consonant" << endl;
	}
	cout << endl;
}