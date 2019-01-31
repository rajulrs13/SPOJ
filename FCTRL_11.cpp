// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int countZeroes(int num) {
  int noOfZeros = 0;
  while (num) {
    noOfZeros = noOfZeros + (num / 5);
    num = num / 5;
  }
  return noOfZeros;
}

int main() {
  int testcases;
  cin >> testcases;
  while (testcases) {
    int num;
    cin >> num;
    cout << countZeroes(num) << endl;
    testcases--;
  }
  return 0;
}