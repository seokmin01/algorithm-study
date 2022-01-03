#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    char op, a;
    int n;
    list<char> L;
    cin >> s >> n;
    for (auto c : s) L.push_back(c);
    auto t = L.end();
    for (int i = 0; i < n; i++) {
        cin >> op;
        switch (op) {
            case 'L':
                if (t != L.begin()) t--;
                break;
            case 'D':
                if (t != L.end()) t++;
                break;
            case 'B':
                if (t != L.begin()) {
                    t--;
                    t = L.erase(t);
                }
                break;
            case 'P':
                cin >> a;
                L.insert(t, a);
                break;
        }
    }
    for (auto c : L) cout << c;
}

/*
case문 안에 break문이 없으면 조건에 부합하는지 여부를 따지지 않고 이어지는 case문을 실행함.
*/
