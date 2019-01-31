// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#define MAX 5002
using namespace std;

long long int memopad[MAX];

long long int countCombinations(char str[], int be) {
  if (str[be] == '\0') {
    return 1;
  }
  if (memopad[be] != -1) {
    return memopad[be];
  }
  long long int oneAtATime = 0;
  long long int twoAtATime = 0;
  int temp = str[be] - '0';
  if (temp != 0) {
    oneAtATime = countCombinations(str, be + 1);
    if (str[be + 1] != '\0') {
      temp = temp * 10;
      temp = temp + (str[be + 1] - '0');
      if (temp <= 26 && temp >= 1) {
        twoAtATime = countCombinations(str, be + 2);
      }
    }
  }

  memopad[be] = oneAtATime + twoAtATime;
  return memopad[be];
}

int main() {
  while (true) {
    char str[5002];
    cin >> str;
    if (str[0] == '0') {
      break;
    }
    for (int i = 0; str[i] != '\0'; i++) {
      memopad[i] = -1;
    }
    cout << countCombinations(str, 0) << endl;
  }
  return 0;
}