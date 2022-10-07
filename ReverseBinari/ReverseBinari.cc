#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	cout << n % 2;
	while (n > 1){
		n = n / 2;
		int j = n % 2;
		cout << j;
	}

	cout << endl;


}