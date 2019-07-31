// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  int k = n % 10;
  if (k != 0) {
      cout << 1 << endl << k;
  }
  else{
      cout << 2;
  }
  return 0;
} 