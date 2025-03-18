#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<bool> dp(s + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            if (dp[j - a[i]] == true) {
                dp[j] = true;
            }
        }
    }
    if(dp[s]) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
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