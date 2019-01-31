// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#include <unordered_map>
using namespace std;
unordered_map<int, long int> m;

long int countCoins(int n) {
  if (n < 12) {
    return n;
  }
  if (m.find(n) != m.end()) {
    return m[n];
  }
  long int a = countCoins(n / 2);
  long int b = countCoins(n / 3);
  long int c = countCoins(n / 4);
  m[n] = a + b + c;
  return m[n];
}

int main() {
  int n;
  while (cin >> n) {
    cout << countCoins(n) << endl;
  }
  return 0;
}
