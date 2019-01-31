#include <string.h>
#include <iostream>
using namespace std;

char from[2001];
char to[2001];
int dp_mat[2001][2001];

int main() {
  int t;
  cin >> t;
  while (t) {
    cin >> from;
    cin >> to;

    int i, j;
    int n = strlen(from);
    int m = strlen(to);

    // Initial setting of matrix
    for (i = 0; i <= n; i++) {
      dp_mat[i][0] = i;
    }
    for (j = 1; j <= m; j++) {
      dp_mat[0][j] = j;
    }

    // DP Matrix Filling
    int q1, q2, q3;
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= m; j++) {
        // Adding 1 only when replacement
        q1 = ((from[i - 1] == to[j - 1]) ? 0 : 1) + dp_mat[i - 1][j - 1];

        // Adding 1 only when inssertion
        q2 = dp_mat[i][j - 1] + 1;

        // Adding 1 only when deletion
        q3 = dp_mat[i - 1][j] + 1;

        // Minimum function implementation
        int val = 0;
        if (q1 < q2 && q1 < q3)
          val = q1;
        else {
          if (q2 < q3)
            val = q2;
          else
            val = q3;
        }
        dp_mat[i][j] = val;
      }
    }

    cout << dp_mat[n][m] << endl;
    t--;
  }
}