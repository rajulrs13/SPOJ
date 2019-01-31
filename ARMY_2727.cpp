// Rajul Saxena
// rajulrs13@gmail.com
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t) {
    int ng;
    cin >> ng;
    int nm;
    cin >> nm;
    int army_g[ng];
    int army_m[nm];
    for (int i = 0; i < ng; i++) {
      cin >> army_g[i];
    }
    sort(army_g, army_g + ng);
    for (int i = 0; i < nm; i++) {
      cin >> army_m[i];
    }
    sort(army_m, army_m + nm);
    int i_g = 0;
    int i_m = 0;
    while (i_g < ng && i_m < nm) {
      if (army_g[i_g] < army_m[i_m]) {
          i_g++;
      }
      else if(army_g[i_g] > army_m[i_m] || army_g[i_g] == army_m[i_m]){
          i_m++;
      }
    }
    if(i_g < ng){
        cout << "Godzilla" << endl;
    }
    else if (i_m < nm){
        cout << "MechaGodzilla" << endl;
    }
    else{
        cout << "uncertain" << endl;
    }

    t--;
  }
  return 0;
}