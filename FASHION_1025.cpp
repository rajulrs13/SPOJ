// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int testcases;
  cin >> testcases;
  while (testcases) {
    int n;
    cin >> n;
    int menArr[n];
    for (int i = 0; i < n; i++) {
      cin >> menArr[i];
    }
    int womenArr[n];
    for (int i = 0; i < n; i++) {
      cin >> womenArr[i];
    }
    sort(menArr, menArr + n);
    sort(womenArr, womenArr + n);
    int totalHotness = 0;
    for (int i = 0; i < n; i++) {
      totalHotness = totalHotness + (menArr[i] * womenArr[i]);
    }
    cout << totalHotness << endl;
    testcases--;
  }
  return 0;
}