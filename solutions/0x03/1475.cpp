#include <bits/stdc++.h>
using namespace std;

int arr[9];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (auto c : s) {
        if (c == '9') arr[6]++;
        else arr[c - '0']++;
    }
    arr[6] = (arr[6] + 1) / 2;
    int max = 0;
    for (int i = 0; i < 9; i++)
        if (arr[i] > max) max = arr[i];
    cout << max;
}
