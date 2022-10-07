#include <iostream>
using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;

	if ( a == b and b == c and a == c){
		if ( (a % 3 == 0 and b % 3 == 0 and c % 3 == 0) and (a % 2 != 0 and b % 2 != 0 and c % 2 != 0)){
			cout << "Bananas" << endl;
		}
		else if  ( a % 2 == 0 and b % 2 == 0 and c % 2 == 0){
			cout << "Apples" << endl;
		}
		else{
			cout << "Joker" << endl;
		}
	}
	else{
		cout << "Loss" << endl;
	}

}