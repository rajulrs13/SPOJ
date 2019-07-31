// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#include<cstdio>
using namespace std;
 
int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    float ans = (n * n) / (2 * 3.14159);
    printf("%.2f\n",ans);
  }
  return 0;
} 