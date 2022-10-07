#include <iostream>
using namespace std; 

int main(){
	int n, x, y, z;
	cin >> n;

	x = n % 10;
	y = x % 10;
	z = y % 10;

	cout << x + y + z << endl;



}