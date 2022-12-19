#include <bits/stdc++.h>
using namespace std;

int arr[26];  // 전역에서는 0으로 초기화 된다.
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // int arr[26] = {};
  string s;
  cin >> s;
  for (auto c : s) arr[c - 'a']++;
  for (int i = 0; i < 26; i++) cout << arr[i] << ' ';
}

/*
아스키코드와 배열을 활용한 풀이
*/
