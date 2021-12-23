#include <bits/stdc++.h>
using namespace std;

int k, cnt;
string str = "DCBAE";
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 3; i++) {
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            cin >> k;
            cnt += k;
        }
        cout << str[cnt] << '\n';
    }
}
