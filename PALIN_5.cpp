// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

void printNum(int num[], int len) {
  for (int i = 0; i < len; i++) {
    cout << num[i];
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t) {
    char str[1000001];
    cin >> str;
    int num[1000001];
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
      num[i] = str[i] - '0';
      len++;
    }
    bool isEven = len % 2 == 0 ? true : false;
    int be = 0;
    int en = len - 1;
    while (be <= en) {
      if (num[be] != num[en]) {
        break;
      }
      be++;
      en--;
    }

    if (be > en) {
      if (isEven) {
        be = len / 2 - 1;
        en = len / 2;
        while (be >= 0) {
          if (num[be] < 9) {
            num[be]++;
            num[en]++;
            break;
          } else {
            num[be] = 0;
            num[en] = 0;
          }
          be--;
          en++;
        }
        if (be < 0) {
          cout << "1";
          be = len - 1;
          while (be) {
            cout << "0";
            be--;
          }
          cout << "1" << endl;
        } else {
          printNum(num, len);
        }
      } else {
        if (num[len / 2] < 9) {
          num[len / 2]++;
          printNum(num, len);
        } else {
          num[len / 2] = 0;
          be = len / 2 - 1;
          en = len / 2 + 1;
          while (be >= 0) {
            if (num[be] < 9) {
              num[be]++;
              num[en]++;
              break;
            } else {
              num[be] = 0;
              num[en] = 0;
            }
            be--;
            en++;
          }
          if (be < 0) {
            cout << "1";
            be = len - 1;
            while (be) {
              cout << "0";
              be--;
            }
            cout << "1" << endl;
          } else {
            printNum(num, len);
          }
        }
      }
    } else {
      if (isEven) {
        be = len / 2 - 1;
        en = len / 2;
      } else {
        be = len / 2 - 1;
        en = len / 2 + 1;
      }
      bool leftGreaterThanRight = true;
      while (be >= 0) {
        if (num[be] > num[en]) {
          break;
        } else if (num[be] < num[en]) {
          leftGreaterThanRight = false;
          break;
        }
        be--;
        en++;
      }
      if (isEven) {
        be = len / 2 - 1;
        en = len / 2;
      } else {
        be = len / 2 - 1;
        en = len / 2 + 1;
      }
      if (leftGreaterThanRight) {
        while (be >= 0) {
          num[en] = num[be];
          be--;
          en++;
        }
      } else if (!leftGreaterThanRight && !isEven && num[len / 2] < 9) {
        num[len / 2]++;
        be = len / 2 - 1;
        en = len / 2 + 1;
        while (be >= 0) {
          num[en] = num[be];
          be--;
          en++;
        }
      } else {
        if (!isEven) {
          num[len / 2] = 0;
        }
        while (be >= 0) {
          if (num[be] < 9) {
            num[be]++;
            num[en] = num[be];
            break;
          } else {
            num[be] = 0;
            num[en] = 0;
          }
          be--;
          en++;
        }
        while (be >= 0) {
          num[en] = num[be];
          be--;
          en++;
        }
      }
      printNum(num, len);
    }
    t--;
  }
  return 0;
}