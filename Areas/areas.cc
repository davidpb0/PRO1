#include <iostream>
using namespace std;

int main() {
	cout.precision(6);
	cout.setf(ios::fixed);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string type;
		cin >> type;

		double x, y;
		if (type == "rectangle") {
			cin >> x >> y;
			cout << x * y << endl;
		} else {
			cin >> y;
			double pi = 3.141592653589793238463;
			cout << y * y * pi << endl;
		}
	}
}