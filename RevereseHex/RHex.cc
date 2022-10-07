#include <iostream>
using namespace std;

int main(){
	int n, j;
	cin >> n;

	if (n == 0) cout << n;

	
	while (n != 0){
		j = n % 16;
		n = n / 16;
		
		if (j >= 10) cout << char('A'+j-10);
		else cout << j;
		
	}

	cout << endl;

}

