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
    cin >> n;
    vector<int> dp(100005, 0);
    for (int i = 2; i <= 100000; i++) {
        dp[i] = dp[i - 1] + 1;
        if(i%2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }
        if(i%3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }
    cout << dp[n] << endl;
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