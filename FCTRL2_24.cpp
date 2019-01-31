// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int testcases;
  cin >> testcases;
  while (testcases) {
    int num;
    cin >> num;
    int fact[200] = {0};
    fact[0] = 1;
    int numDigits = 1;
    for (int j = 1; j <= num; j++) {
      int carry = 0;
      int i = 0;
      for (i = 0; i <= numDigits; i++) {
        int temp = (fact[i] * j) + carry;
        fact[i] = temp % 10;
        carry = temp / 10;
      }
      while (carry) {
        fact[i] = fact[i] + (carry % 10);
        carry = carry / 10;
        i++;
        numDigits++;
      }
    }
    int mysum = 0;
    bool flag = false;
    for (int i = 199; i >= 0; i--) {
      if (fact[i] == 0 && flag == false) {
        continue;
      } else {
        cout << fact[i];
        flag = true;
      }
    }
    cout << endl;
    testcases--;
  }
  return 0;
}