#include <iostream>
using namespace std;

int main(){
	int h, m, s;
	cin >> h >> m >> s;

	

	if (h < 10 and m < 10 and s < 9){
		cout << "0" << h << ":" << "0" << m << ":" << "0" << s+1 << endl;
	}

	else if (h < 10 and m < 10 and s <= 9){
		cout << "0" << h << ":" << "0" << m << ":" << s+1 << endl;
	}

	else if (h < 10 and m <= 59 and s < 9){
		cout << "0" << h << ":" << m << ":" << "0" << s+1 << endl;
	}


	else if (h <= 23 and m <= 59 and s < 9){
		cout << h << ":" << m << ":" << "0" << s+1 << endl;;
	}

	else if (h < 10 and m <= 59 and s <= 9){
		cout << "0" << h << ":" << m << ":" << s+1 << endl;
	}

	else if (h < 10 and m <= 59 and s <= 9){
		cout << "0" << h << ":" << m << ":" << s+1 << endl;
	}

	else if (h <= 23 and m < 59 and s < 59){
		cout << h << ":" << m << ":" << s+1 << endl;
	}

	else if (h <= 23 and m < 59 and s == 59){
		cout << h << ":" << m+1 << ":" << "00" << endl;
	}

	else if (h < 23 and m == 59 and s == 59){
		cout << h+1 << ":" << "00" << ":" << "00" << endl;
	}
	else if (h <= 23 and m == 59 and s == 59){
		cout << "00" << ":" << "00" << ":" << "00" << endl;
	}

}