#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n;
    ll x;
    cin >> n;   
    cin >> x;
    ll a[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto it = lower_bound(a, a + n, x);
    int idx = it - a;
    if(a[idx] == x) {
        cout << idx + 1;
    }
    else if(a[idx] > x && idx != 0) {
        cout << idx;
    }
    else {
        cout << -1;
    }
    cout << endl;
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