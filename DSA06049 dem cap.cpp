#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    ll cnt = 0;
    int l = 0;
    for (int r = 1; r < n; r++) {
        while(l < r && a[r] - a[l] >= k) {
            ++l;
        }
        cnt += (r - l);
    }
    cout << cnt << endl;
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