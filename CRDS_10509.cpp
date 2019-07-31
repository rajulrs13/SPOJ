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
    long long p = (n * (2 * n + 2) / 2) + (n*(n - 1)/2);
    cout << p % 1000007 << endl;
    t--;
  }
  return 0;
} 