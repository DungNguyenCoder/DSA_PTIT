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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if(n == 1) {
        cout << a[0] << endl;
        return;
    }
    else if(n == 2) {
        cout << max(a[0], a[1]) << endl;
        return;
    }
    int prev2 = a[0];
    int prev1 = max(a[0], a[1]);
    int cur = 0;
    for (int i = 2; i < n; i++) {
        cur = max(prev1, prev2 + a[i]);
        prev2 = prev1;
        prev1 = cur;
    }
    cout << prev1 << endl;
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