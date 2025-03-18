#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

inline void solution() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int dp[n];
    memset(dp, 0, sizeof(dp));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp[a[i]] = dp[a[i] - 1] + 1;
        ans = max(ans, dp[a[i]]);
    }
    cout << n - ans;
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