#include <iostream>
using namespace std;

int main(){
    int  k, j;
    cin >> k;


    for (int n = 2; n <= 16; ++n){
        int contador = 0;
        j = k;
        while (j != 0){
            j = j / n;
            ++contador;
        }
        cout << "Base" << " " << n << ":" << " " << contador << " " << "cifras" << "." << endl;
    }       
    

}
    

