// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
using namespace std;

int getMinDist(int cows, int stalls[], int n) {
  int maxdist = stalls[n - 1] - stalls[0];
  int mindist = 0;
  int ans = maxdist;
  while (maxdist >= mindist) {
    int mid = (maxdist + mindist) / 2;
    int temp = stalls[0] + mid;
    int count = 1;
    for(int i = 1; i < n; i++){
        if(stalls[i]>=temp){
            count++;
            temp = stalls[i] + mid;
        }
        if(count >= cows){
            break;
        }
    }
    if(count < cows){
        maxdist = mid - 1;
    }
    else{
        mindist = mid + 1;
        ans = mid;
    }
  }
  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t) {
    int n;
    cin >> n;
    int cows;
    cin >> cows;
    int stalls[n];
    for (int i = 0; i < n; i++) {
      cin >> stalls[i];
    }
    sort(stalls, stalls + n);
    cout << getMinDist(cows, stalls, n) << endl;
    t--;
  }
  return 0;
}