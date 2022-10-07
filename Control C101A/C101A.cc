#include <iostream>
using namespace std; 

int main(){
	int n, x, y, z, a, b;
	cin >> n;

	x = n % 10;
	a = n / 10;
	y = a % 10;
	b = n / 100;
	z = b % 10;

	cout << x + y + z << endl;



}