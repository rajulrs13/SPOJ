// Rajul Saxena
// rajulrs13@gmail.com
#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<char, int> m;
  m['+'] = 1;
  m['-'] = 1;
  m['*'] = 2;
  m['/'] = 2;
  m['^'] = 3;
  int testcases;
  cin >> testcases;
  getchar();
  while (testcases) {
    char input_str[402];
    cin.getline(input_str, 401);
    char output_str[402];
    stack<char> s;
    s.push('(');
    int j = 0;
    for (int i = 0; input_str[i] != '\0'; i++) {
      if (input_str[i] == '(') {
        s.push(input_str[i]);
      } else if (input_str[i] == '+' || input_str[i] == '-' ||
                 input_str[i] == '*' || input_str[i] == '/' ||
                 input_str[i] == '^') {
        while (s.top() != '(' && m[input_str[i]] > m[s.top()]) {
          output_str[j] = s.top();
          s.pop();
          j++;
        }
        s.push(input_str[i]);
      } else if (input_str[i] == ')') {
        while (s.top() != '(') {
          output_str[j] = s.top();
          s.pop();
          j++;
        }
        s.pop();
      } else {
        output_str[j] = input_str[i];
        j++;
      }
    }
    while (s.top() != '(') {
      output_str[j] = s.top();
      s.pop();
      j++;
    }
    s.pop();
    output_str[j] = '\0';
    cout << output_str << endl;
    testcases--;
  }
  return 0;
}