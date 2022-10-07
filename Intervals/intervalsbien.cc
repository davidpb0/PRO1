#include <iostream>
using namespace std;

int main() {
  int a1,b1,a2,b2;
  int x,y;
  cin >> a1 >> b1 >> a2 >> b2;

  if (a1 >= a2){
    x = a1;
  } else if (a2 > a1) {
    x = a2;
  }

  if (b1 <= b2){
    y = b1;
  } else if (b2 < b1) {
    y = b2;
  }

  if (x > y){
    cout << "[]" << endl;
  } else {
    cout << "[" << x << "," << y << "]" << endl;
  }

}







	