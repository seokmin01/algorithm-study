#include <bits/stdc++.h>
using namespace std;

int n;
char c;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  if (n >= 90)
    c = 'A';
  else if (n >= 80)
    c = 'B';
  else if (n >= 70)
    c = 'C';
  else if (n >= 60)
    c = 'D';
  else
    c = 'F';
  cout << c;
}
