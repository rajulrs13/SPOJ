// Rajul Saxena
// rajulsaxena13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    long long int third_term;
    cin >> third_term;

    long long int last_third_term;
    cin >> last_third_term;

    long long int sum;
    cin >> sum;

    long long int n = (2 * sum) / (third_term + last_third_term);
    long long int d = (last_third_term - third_term) / (n - 3 - 2);
    long long int a = third_term - (2 * d);
    
    cout << n << endl;
    for (int i = 0; i < n; i++) {
      cout << a + (i * d) << " ";
    }
    cout << endl;
    t--;
  }
  return 0;
}