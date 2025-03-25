#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

ll ans(int n, ll k) {
    if(n == 1)
        return 1;
    ll mid = (1LL << (n - 1)) - 1;
    if(k == mid+1)
        return n;
    if(k <= mid) {
        return ans(n - 1, k);
    }
    return ans(n - 1, k - mid - 1);
}

inline void solution() {
    int n;
    ll k;
    cin >> n >> k;
    cout << ans(n, k) << endl;
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