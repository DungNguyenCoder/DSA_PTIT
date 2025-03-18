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
    int a[n + 5];
    vector<int> dpUp(n, 1);
    vector<int> dpDown(n, 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if(a[i] > a[i-1]) {
            dpUp[i] = dpUp[i - 1] + 1;
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if(a[i] > a[i+1]) {
            dpDown[i] = dpDown[i + 1] + 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, dpDown[i] + dpUp[i] - 1);
    }
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