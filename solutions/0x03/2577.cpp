#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, k, num = 1;
    for (i = 0; i < 3; i++) {
        cin >> k;
        num *= k;
    }
    string s = to_string(num);
    for (auto c : s)
        arr[c - '0']++;
    /*
    // 계산 결과를 자릿수별로 확인하여 저장하는 풀이
    while (num > 0) {
        arr[num%10]++;
        num /= 10;
    }
    */
    for (i = 0; i < 10; i++)
        cout << arr[i] << '\n';
}
