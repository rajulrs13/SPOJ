// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int num1;
    cin >> num1;
    int num2;
    cin >> num2;
    int num3;
    cin >> num3;
    if (num1 == 0 && num2 == 0 && num3 == 0) {
      break;
    }
    if (num2 - num1 == num3 - num2) {
      cout << "AP " << num3 + (num3 - num2) << endl;
    } else if (num2 / num1 == num3 / num2) {
      cout << "GP " << num3 * (num3 / num2) << endl;
    }
  }
  return 0;
}