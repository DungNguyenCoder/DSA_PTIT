#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    for(int &x : a)
        cin >> x;
    for(int &x : b)
        cin >> x;
    sort(a, a + n);
    sort(b, b + n);
    ll ans = 1ll * a[n - 1] * b[0];
    cout << ans << endl;
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