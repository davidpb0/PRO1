#include <iostream>
using namespace std;

int main(){

	int n;
	int i;
	

	while (cin >> n){
		int j = n;
		i = 0;
		while (n > 0){
			i = i + n % 10;	
			n = n / 10;	
		}

		cout <<  "The sum of the digits of" << " " << j << " " << "is" << " " << i << "." <<endl;





	}	

	

}