// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    long long int n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++) {
      long long int temp;
      cin >> temp;
      sum = (sum + (temp % n)) % n;
    }
    if (sum % n == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
    t--;
  }
  return 0;
}