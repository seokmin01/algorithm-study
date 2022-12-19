#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string line;
  while (1) {
    getline(cin, line);  // 공백을 포함한 줄의 입력
    if (line == ".") break;
    int bal = 1;
    stack<char> ST;
    for (auto c : line) {
      if (c == '(' || c == '[')
        ST.push(c);
      else if (c == ')') {
        // Short-circuit evaluation
        if (ST.empty() || ST.top() != '(') {
          bal = 0;
          break;
        } else
          ST.pop();  // else가 없어도 됨.
      } else if (c == ']') {
        if (ST.empty() || ST.top() != '[') {
          bal = 0;
          break;
        } else
          ST.pop();
      }
    }
    if (ST.empty() && bal == 1)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}
