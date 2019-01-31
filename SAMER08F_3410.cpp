// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int num;
    cin >> num;
    if (num == 0) {
      break;
    }
    int ans = 0;
    for (int i = 1; i <= num; i++) {
      ans = ans + (i * i);
    }
    cout << ans << endl;
  }
  return 0;
}