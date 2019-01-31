// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

void genearatePrimesInRange(int num1, int num2) {
  for (int i = num1; i <= num2; i++) {
    if (i == 1) continue;
    int flag = true;
    for (int j = 2; j * j <= i; j++) {
      if (i % j == 0) {
        flag = false;
        break;
      }
    }
    if (flag == true) {
      cout << i << endl;
    }
  }
}

int main() {
  int testcases;
  cin >> testcases;
  while (testcases) {
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    genearatePrimesInRange(num1, num2);
    cout << endl;
    testcases--;
  }
  return 0;
}