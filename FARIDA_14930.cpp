// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  for (int j = 1; j <= t; j++) {
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    long long int dp[n];
    for (int i = 0; i < n; i++) {
      if (i == 0) {
        dp[i] = arr[i];
      } else if (i == 1) {
        dp[i] = max(dp[i - 1], arr[i]);  
      } else {
        dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
      }
    }
    cout << "Case " << j << ": " << dp[n - 1] << endl;
  }
  return 0;
}