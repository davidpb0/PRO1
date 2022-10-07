#include <iostream>
using namespace std;

int main(){
	char  x, y;
	cin >> x >> y;

	if ( x == 'A' and y == 'A') cout << "-" << endl;
	else if (x == 'A' and y == 'P') cout << "1" << endl;
	else if (x == 'A' and y == 'V') cout << "2" << endl;
	else if (x == 'P' and y == 'P') cout << "-" << endl;
	else if (x == 'P' and y == 'A') cout << "2" << endl;
	else if (x == 'P' and y == 'V') cout << "1" << endl;
	else if (x == 'V' and y == 'V') cout << "-" << endl;
	else if (x == 'V' and y == 'A') cout << "1" << endl;
	else if (x == 'V' and y == 'P') cout << "2" << endl;



}