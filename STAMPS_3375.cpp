// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
using namespace std;

int calculateAns(int arr[], int n, int k) {
  sort(arr, arr + n, greater<int>());
  int count = 0;
  int sum = 0;
  while (sum < k && count < n) {
    sum = sum + arr[count];
    count++;
  }
  if (sum < k) {
    return -1;
  }
  return count;
}

int main() {
  int t;
  cin >> t;
  for (int j = 1; j <= t; j++) {
    int k;
    cin >> k;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    cout << "Scenario #" << j << ":" << endl;
    int ans = calculateAns(arr, n, k);
    if (ans == -1) {
      cout << "impossible" << endl;
    } else {
      cout << ans << endl;
    }
  }
  return 0;
}