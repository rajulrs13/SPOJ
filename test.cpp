// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n = 1;
    char arr[5];
    cin >> arr;
    int one = arr[0] - '0';
    int two = arr[2] - '0';
    int three = arr[3] - '0';
    if (one || two || three) {
      double num = one;
      num = num + (two / 10.0);
      num = num + (three / 100.0);
      double ans = 0;
      if (num <= 0.5) {
        cout << 1 << " card(s)" << endl;
        continue;
      }
      while (num >= ans) {
        n++;
        ans = ans + (1.0 / n);
      }
      cout << n - 1 << " card(s)" << endl;
    } else {
      break;
    }
  }
  return 0;
}