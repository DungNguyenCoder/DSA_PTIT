#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

vector<vector<ll>> multi(vector<vector<ll>> a, vector<vector<ll>> b) {
    int n = a.size();
    vector<vector<ll>> ans(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < n; k++) {
                ans[i][j] += ((a[i][k] % mod) * (b[k][j] % mod)) % mod;
            }
        }
    }
    return ans;
}

vector<vector<ll>> binpow(vector<vector<ll>> a, int n) {
    if(n == 1) {
        return a;
    }
    vector<vector<ll>> tmp = binpow(a, n / 2);
    if(n%2) {
        return multi(multi(tmp,tmp),a);
    }
    else {
        return multi(tmp,tmp);
    }
}

inline void solution() {
    int n, k;
    cin >> n >> k;
    vector<vector<ll>> ans(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ans[i][j];
        }
    }
    ans = binpow(ans, k);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ans[i][n - 1];
        sum %= mod;
    }
    cout << sum << endl;
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