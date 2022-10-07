#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int contador = 0;
    i = n;
    
    if (n==0){
        contador = 1;
    }
    while (i > 0){
        i = i/10;
        contador += 1;
    }
    
    cout << "The number of digits of" << " " <<  n << " " << "is" << " " << contador << "." << endl;

}