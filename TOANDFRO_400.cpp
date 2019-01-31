// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    getchar();
    char str[202];
    cin >> str;
    int m = (200 / n) + 1;
    char msg[m][n];
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
      if ((i / n) % 2 == 0) {
        msg[i / n][i % n] = str[i];
      } else {
        msg[i / n][n - 1 - (i % n)] = str[i];
      }
      len++;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < (len / n); j++) {
        cout << msg[j][i];
      }
    }
    cout << endl;
  }
  return 0;
}