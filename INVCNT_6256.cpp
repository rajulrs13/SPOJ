// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
using namespace std;

long long ans = 0;

void mergeArrays(int be, int mid, int en, int arr[]) {
  int n1 = mid - be + 1;
  int n2 = en - mid;
  int arr1[n1];
  for (int k = 0; k < n1; k++) {
    arr1[k] = arr[be + k];
  }
  int arr2[n2];
  for (int k = 0; k < n2; k++) {
    arr2[k] = arr[mid + 1 + k];
  }
  int i = 0;
  int j = 0;
  int l = be;
  int cnt = 0;
  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      arr[l] = arr1[i];
      i++;
      ans = ans + cnt;
    } else {
      arr[l] = arr2[j];
      j++;
      cnt++;
    }
    l++;
  }
  while (i < n1) {
    arr[l] = arr1[i];
    i++;
    l++;
    ans = ans + cnt;
  }
  while (j < n2) {
    arr[l] = arr2[j];
    j++;
    l++;
    cnt++;
  }
}

void mergeSort(int be, int en, int arr[]) {
  if (be >= en) {
    return;
  }
  int mid = (be + en) / 2;
  mergeSort(be, mid, arr);
  mergeSort(mid + 1, en, arr);
  mergeArrays(be, mid, en, arr);
}

void countInversions(int arr[], int n) { mergeSort(0, n - 1, arr); }

int main() {
  int t;
  cin >> t;
  while (t) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    countInversions(arr, n);
    cout << ans << endl;
    ans = 0;
    t--;
  }
  return 0;
}