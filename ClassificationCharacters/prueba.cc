#include <iostream>
using namespace std;

int main(){
	char x;
	cin >> x;

	if ((x >= 'b' and x <= 'z' and x != 'a') and  x !='e' and x != 'i' and x !='o' and x != 'u'){
		cout << "lowercase" << endl;
		cout << "consonant"<< endl;
	}
	else{
		cout << "WTF";
	}
	cout << endl;	



}







	