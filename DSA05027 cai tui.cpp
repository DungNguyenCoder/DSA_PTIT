#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, W;
    cin >> n >> W;
    int kl[n+1];
    for (int i = 1; i <= n; i++)
        cin >> kl[i];
    int gt[n];
    for (int i = 1; i <= n; i++)
        cin >> gt[i];
    int dp[n + 1][W + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            //khong lay i vao tui
            dp[i][j] = dp[i - 1][j];
            //co the dua i vao tui
            if(j >= kl[i]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - kl[i]] + gt[i]);
            }
        }
    }
    cout << dp[n][W] << endl;
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