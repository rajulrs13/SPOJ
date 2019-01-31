// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    int n;
    cin >> n;
    int k = n;
    int i = 1;
    int sum = 0;
    while (k > i) {
      k = k - i;
      i++;
    }
    if(i & 1){
        cout << "TERM " << n << " IS " << i + 1 - k << "/" << k << endl;
    }
    else{
        cout << "TERM " << n << " IS " << k << "/" << i + 1 - k << endl;
    }
    t--;
  }
  return 0;
}