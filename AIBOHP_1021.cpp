// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int dp[6105][6105];

int myReverseLCS(string s, string r) {
    for (int i = 0; i <= s.length(); i++) {
        dp[0][i] = 0;
        dp[i][0] = 0;
    }

    for (int i = 1; i <= s.length(); i++) {
        for (int j = 1; j <= r.length(); j++) {
            if (s[i - 1] == r[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[s.length()][r.length()];
}

int main() {
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        getline(cin, s);
        string r = s;
        for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
            char temp = r[i];
            r[i] = r[j];
            r[j] = temp;
        }
        cout << s.length() - myReverseLCS(s, r) << endl;
    }
    return 0;
}