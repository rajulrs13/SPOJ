// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int revNum(int num) {
  int revnum = 0;
  while (num) {
    int temp = num % 10;
    revnum = (revnum * 10) + temp;
    num = num / 10;
  }
  return revnum;
}

int main() {
  int testcases;
  cin >> testcases;
  while (testcases) {
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    cout << revNum(revNum(num1) + revNum(num2)) << endl;
    testcases--;
  }
  return 0;
}