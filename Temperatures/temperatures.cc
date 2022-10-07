#include <iostream>
using namespace std;

int main (){
	int x;
	cin >> x;
	if (x > 30 and x <= 99){
		cout << "it's hot";
	}

	else if ( x <= 30 and x >= 10){
		cout << "it's ok";
	}
	else if (x < 10 and x > 0){
		cout << "it's cold";
	}

	else if (x <= 0){
		cout << "it's cold" << endl; 
		cout << "water would freeze"; 
	}

	else if (x >=100){
		cout << "it's hot" << endl;
		cout << "water would boil";

	}
	cout << endl;
}
