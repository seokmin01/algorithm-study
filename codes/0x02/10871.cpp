#include <bits/stdc++.h>
using namespace std;

int n, x, t;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    while(n--) {
        cin >> t;
        if (t < x) cout << t << ' ';
    }
}
