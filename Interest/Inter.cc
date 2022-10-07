#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    int t;
    double c, i;
    string type;

    cin >> c;
    cin >> i;
    cin >> t;
    cin >> type;
    
    double sum = c;
    if (type == "simple") {
        cout << c + ((c * (i / 100.0f)) * t) << endl;
    }
    else if(type == "compound"){
        for (int j = 0; j < t; ++j) {
            sum += ((sum * (i / 100.0f))) ;
        }
        cout << sum << endl;

    }


} 