// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int n;
  while (true) {
    cin >> n;
    if (n == 0) {
      break;
    }
    int orig_arr[n];
    int ans_arr[n];
    for (int i = 0; i < n; i++) {
      cin >> orig_arr[i];
      ans_arr[orig_arr[i] - 1] = i + 1;
    }
    bool isAmbigous = true;
    for (int i = 0; i < n; i++) {
      if (orig_arr[i] != ans_arr[i]) {
        isAmbigous = false;
        break;
      }
    }
    if (isAmbigous) {
      cout << "ambiguous" << endl;
    } else {
      cout << "not ambiguous" << endl;
    }
  }
  return 0;
}