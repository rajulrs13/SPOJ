// Rajul Saxena
// rajulsaxena13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    long long int n;
    cin >> n;
    long long int ans;
    ans = (n * (n + 2) * ((2 * n) + 1)) / 8;
    cout << ans << endl;
    t--;
  }
  return 0;
}