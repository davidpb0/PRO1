#include <iostream>
using namespace std;

int main(){
	char x;
	cin >> x;
	if (x >= 'A' and x <= 'Z'){
		cout << char(int (x) - int ('A') + int ('a'));

	}

	else if (x >= 'a' and  x <= 'z'){
		cout << char(int (x) - int ('a') + int ('A'));
	}

	cout << endl;
}