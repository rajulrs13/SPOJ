// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t) {
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n + 1][m];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }
    for (int i = 0; i < m; i++) {
      arr[n][i] = 0;
    }
 
    // Solution
    for (int i = n - 1; i >= 0; i--) {
      for (int j = 0; j < m; j++) {
        int left = (j - 1 >= 0 ? arr[i][j] + arr[i + 1][j - 1] : 0);
        int bottom = arr[i][j] + arr[i + 1][j];
        int right = (j + 1 < m ? arr[i][j] + arr[i + 1][j + 1] : 0);
        arr[i][j] = max(left, max(bottom, right));
      }
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
      ans=max(ans,arr[0][i]);
    }
    cout << ans << endl;
    t--;
  }
  return 0;
} 