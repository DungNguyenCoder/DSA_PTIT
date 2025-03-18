#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
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
        int n;
        ll k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            if(a[i] >= k) {
                break;
            }
            for (int j = i + 1; j < n; j++) {
                auto it = lower_bound(a + j + 1, a + n, k - a[i] - a[j]);
                cnt += it - a - j - 1;
            }
        }
        cout << cnt << "\n";
    }
}