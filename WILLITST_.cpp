// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  long long int n;
  cin >> n;
  bool flag = true;
  if (n <= 1) {
    flag = false;
    cout << "NIE";
  } else {
    while (n) {
      if (n == 1) {
        break;
      } else {
        if (n & 1) {
          flag = false;
          cout << "NIE";
          break;
        } else {
          n = n >> 1;
        }
      }
    }
    if (flag) cout << "TAK";
  }

  return 0;
}