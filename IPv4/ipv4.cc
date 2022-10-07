#include <iostream>
using namespace std;

int main (){

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if ((a % 2 == 0 and b % 2 != 0 and c % 2 == 0 and d % 2 != 0) or (a % 2 != 0 and b % 2 == 0 and c % 2 != 0 and d % 2 == 0)) cout << "LBA" << endl;

	if ( a < b and b < c and c < d) cout << "Increasing" << endl;
	if ( a > b and b > c and c > d) cout << "Decreasing" << endl;

	if ( a == c and b == d) cout << "Folded" << endl;

	
}