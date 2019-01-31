// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#include <string>
using namespace std;

string correctEquation(string str) {
  int num_arr[3] = {0};
  int cur_num = 0;
  int currupt_num = -1;
  int i = 0;
  while (i < str.length()) {
    if (str[i] >= '0' && str[i] <= '9') {
      num_arr[cur_num] = (num_arr[cur_num] * 10) + (str[i] - '0');
    } else if (str[i] == '+') {
      cur_num = 1;
    } else if (str[i] == '=') {
      cur_num = 2;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      currupt_num = cur_num;
    }
    i++;
  }
  if (currupt_num == 0) {
    int missing_num = num_arr[2] - num_arr[1];
    string new_str = to_string(missing_num);
    new_str = new_str + " + ";
    new_str = new_str + to_string(num_arr[1]);
    new_str = new_str + " = ";
    new_str = new_str + to_string(num_arr[2]);
    return new_str;

  } else if (currupt_num == 1) {
      int missing_num = num_arr[2] - num_arr[0];
    string new_str = to_string(num_arr[0]);
    new_str = new_str + " + ";
    new_str = new_str + to_string(missing_num);
    new_str = new_str + " = ";
    new_str = new_str + to_string(num_arr[2]);
    return new_str;
  } else if (currupt_num == 2) {
      int missing_num = num_arr[0] + num_arr[1];
    string new_str = to_string(num_arr[0]);
    new_str = new_str + " + ";
    new_str = new_str + to_string(num_arr[1]);
    new_str = new_str + " = ";
    new_str = new_str + to_string(missing_num);
    return new_str;
  } else {
    return str;
  }
}

int main() {
  int t;
  cin >> t;
  string str;
  while (t--) {
    getline(cin, str);
    while (str.length() == 0) getline(cin, str);
    cout << correctEquation(str) << endl;
  }
  return 0;
}