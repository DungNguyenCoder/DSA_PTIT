#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n;
int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void Try(int pos, int n, int &cnt) {
    if(n == 0) {
        return;
    }
    cnt += n / money[pos];
    n %= money[pos];
    // cout << n << " " << cnt << endl;
    Try(pos - 1, n, cnt);
}

int res(int n) {
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;
    for(int x : money) {
        for (int j = x; j <= n; j++) {
            dp[j] = min(dp[j], dp[j - x] + 1);
        }
    }
    if(dp[n] == INT_MAX)
        return -1;
    return dp[n];
}

inline void solution() {
    cin >> n;
    // int cnt = 0;
    // Try(9, n, cnt);
    // cout << endl;
    cout << res(n) << endl;
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