#include <iostream>
using namespace std;

int main(){
	char x;
	cin >> x;

	if ((x >= 'A' and x <= 'Z' and x == 'A') or x == 'E' or x == 'I' or x == 'O' or x == 'U'){
		cout << "uppercase" << endl;
		cout << "vowel"<< endl;
	}
	else if ((x >= 'a' and x <= 'z' and x == 'a') or x == 'e' or x == 'i' or x == 'o' or x == 'u'){
		cout << "lowercase" << endl;
		cout << "vowel"<< endl;
	}
	else if (x >= 'B' and x <= 'Z' and x != 'A' and x != 'E' and x != 'I' and x != 'O' and x != 'U'){
		cout << "uppercase" << endl;
		cout << "consonant"<< endl;
	}
	else if (x >= 'b' and x <= 'z' and x != 'a' and x !='e' and x != 'i' and x != 'o' and x != 'u'){
		cout << "lowercase" << endl;
		cout << "consonant"<< endl;
	}
}