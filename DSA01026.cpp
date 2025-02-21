#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int a[2] = {6, 8};
int n;
int ans[20];

void out() {
    for (int i = 1; i <= n; i++) {
        cout << ans[i];
    }
    cout << endl;
}

bool check() {
    for (int i = 2; i <= n; i++) {
        if(ans[i] == ans[i-1] && ans[i] == 8) {
            return false;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if(ans[i] == 6) {
            ++cnt;
        }
        else {
            cnt = 0;
        }
        if(cnt > 3) {
            return false;
        }
    }
    return true;
}

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        ans[i] = a[j];
        if(i == n) {
            if(ans[1] == 8 && ans[n] == 6 && check()) {
                out();
            }
        }
        else {
            Try(i + 1);
        }
    }
}

inline void solution() {
    memset(ans, 0, sizeof(ans));
    cin >> n;
    Try(1);
}

int main() {
    faster();
    int t;
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}