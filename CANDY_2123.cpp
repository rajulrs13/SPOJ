// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == -1) {
      break;
    }
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sum = sum + arr[i];
    }
    int avg = sum / n;
    int up = 0;
    int down = 0;
    for (int i = 0; i < n; i++) {
      if (avg - arr[i] >= 0) {
        up = up + (avg - arr[i]);
      } else {
        down = down + (arr[i] - avg);
      }
    }
    if (down != up) {
      cout << -1 << endl;
    } else {
      cout << down << endl;
    }
  }
  return 0;
}