#include <iostream>
using namespace std;

int sumador(int x) {
	if (x > 0) return x * x+sumador(x-1);
	else return 0;
}

int main() {
	int n;
	cin >> n;
	cout << sumador(n) << endl;
}