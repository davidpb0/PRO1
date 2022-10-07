#include <iostream>
using namespace std;

int main(){
	int contador = 0;
	char n = 'n';

	while (n != '.'){
		cin >> n;
		if (n == 'a'){
			++contador;
		}

	}

	cout << contador << endl;

}