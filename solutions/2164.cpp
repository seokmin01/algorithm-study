#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> Q;
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++) Q.push(i);
    while (Q.size() > 1) {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    cout << Q.front();
}
