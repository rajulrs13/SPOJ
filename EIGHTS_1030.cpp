// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    long long int k;
    cin >> k;
    int second = k & 1 ? 9 : 4;
    long long int third = k & 1 ? (((k - 1) / 2) * 5) + 1 : ((k / 2) * 5) - 1;

    cout << third << second << "2" << endl;
    t--;
  }
  return 0;
}