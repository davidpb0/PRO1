#include <iostream>
using namespace std;

int main(){

	int a, b, c;
	int contador = 0;
	while(cin >> a >> b >> c){

		if ( a == b and b == c and a == c){
			if ( (a % 3 == 0 and b % 3 == 0 and c % 3 == 0) and (a % 2 != 0 and b % 2 != 0 and c % 2 != 0)){
				contador = contador + 15;
			}
			if  ( a % 2 == 0 and b % 2 == 0 and c % 2 == 0){
				contador = contador + 10;
			}
			if ((a % 3 != 0 and b % 3 != 0 and c % 3 != 0) and (a % 2 != 0 and b % 2 != 0 and c % 2 != 0)){
				contador = contador + 5;
			}
		}
		else{
			contador = contador + 0;
	}
	}
	cout << contador << endl;



}