#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

string ans;

void findMax(string &s, int k, int idx) {
    if(k == 0)
        return;
    int n = s.size();
    char maxDigit = s[idx];
    for (int i = idx + 1; i < n; i++) {
        maxDigit = max(maxDigit, s[i]);
    }
    if(maxDigit != s[idx])
        --k;
    for (int i = n - 1; i >= idx; i--) {
        if(s[i] == maxDigit) {
            swap(s[idx], s[i]);
            if(s > ans) {
                ans = s;
            }
            findMax(s, k, idx + 1);
            swap(s[idx], s[i]);
        }
    }
}

inline void solution() {
    string s;
    int k;
    cin >> k >> s;
    ans = s;
    findMax(s, k, 0);
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