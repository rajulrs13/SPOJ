// Rajul Saxena
// rajulrs13@gmail.com
#include <cmath>
#include <iostream>
using namespace std;
 
int main() {
  while (true) {
    int g;
    cin >> g;
    int b;
    cin >> b;
    if (g == -1 && b == -1) {
      break;
    }
    if (g == 0) {
      cout << b << endl;
    } else if (b == 0) {
      cout << g << endl;
    } else if (g == b) {
      cout << 1 << endl;
    } else if (g > b) {
      cout << ceil(g * 1.0 / (b + 1)) << endl;
    } else {
      cout << ceil(b * 1.0 / (g + 1)) << endl;
    }
  }
  return 0;
}