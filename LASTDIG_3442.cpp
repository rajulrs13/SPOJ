#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    int a;
    cin >> a;
    int b;
    cin >> b;
    int ans = 1;
    while (b) {
      if (b % 2 != 0) {
        ans = (ans * a) % 10;
      }
      b = b >> 1;
      a = (a * a) % 10;
    }
    cout << ans << endl;
    t--;
  }
}