#include <iostream>
using namespace std;

int main(){
	int years, days, hours, minutes, seconds;
	cin >> years >> days >> hours >> minutes >> seconds;

	cout << ((((((years * 365 + days)  * 24) + hours) * 60) + minutes) * 60) + seconds << endl;

}