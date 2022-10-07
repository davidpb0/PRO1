#include <iostream>
using namespace std;

int main(){
	double x;
	cin >> x;
	if ((x > int(x)) and ((x - int(x)) >= 0.5)){
		cout << int(x) << " " << int(x) + 1 << " " << int(x) + 1 ;
	}

	else if (((x - int(x)) <= 0.5 and (x - int(x)) > 0 )){
		cout << int(x) << " " << int(x) + 1 << " " << int(x);
	}

	else{
		cout << int(x) << " " << int(x) << " " << int(x);
	}

	cout << endl;

}