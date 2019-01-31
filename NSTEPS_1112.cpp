// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int testcases;
  cin >> testcases;
  while (testcases) {
    int X;
    cin >> X;
    int Y;
    cin >> Y;
    if (X % 2 == 0) {
      if (X - Y == 0 || X - Y == 2) {
        cout << X + Y << endl;
      } else {
        cout << "No Number" << endl;
      }
    } else {
      if (X - Y == 0 || X - Y == 2) {
        cout << X + Y - 1 << endl;
      } else {
        cout << "No Number" << endl;
      }
    }
    testcases--;
  }
  return 0;
}