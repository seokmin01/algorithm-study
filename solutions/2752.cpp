#include <bits/stdc++.h>
using namespace std;

int i, arr[3];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  for (i = 0; i < 3; i++) cin >> arr[i];
  sort(arr, arr + 3);
  for (i = 0; i < 3; i++) cout << arr[i] << ' ';
}
