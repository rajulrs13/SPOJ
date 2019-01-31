// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#include <stack>
using namespace std;

bool check(int cars[], int n) {
    stack<int> sidelane;
    int be = 1;
    for(int i = 0; i < n; i++){
        if(cars[i] == be){
            be++;
            while(!sidelane.empty() && sidelane.top() <= be){
                if(sidelane.top() == be){
                    be++;
                }
                sidelane.pop();
            }
            continue;
        }
        else{
            if(sidelane.empty() || sidelane.top() > cars[i]){
                sidelane.push(cars[i]);
            }
            else{
                return false;
            }
        }
    }
    if(sidelane.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    int cars[n];
    for (int i = 0; i < n; i++) {
      cin >> cars[i];
    }
    bool isPossible = check(cars, n);
    if(isPossible){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
  }
  return 0;
}