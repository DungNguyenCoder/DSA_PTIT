#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int cntWay(string s) {
    int n = s.size();
    if(s[0] == '0')
        return 0;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        if(s[i-1] != '0')
            dp[i] += dp[i - 1];
        int two = stoi(s.substr(i - 2, 2));
        if(two >= 10 && two <= 26)
            dp[i] += dp[i - 2];
    }
    return dp[n];
}

inline void solution() {
    string s;
    cin >> s;
    cout << cntWay(s) << endl;
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