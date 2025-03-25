#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

ll binpow(ll a, ll b) {
    if(b == 0) {
        return 1;
    }
    if(b == 1) {
        return a % mod;
    }
    ll x = binpow(a, b / 2);
    if(b%2 == 0) {
        return (x % mod * x % mod) % mod;
    }
    return (((x % mod * x % mod) % mod) * (a % mod)) % mod;
}

inline void solution() {
    ll n, k;
    cin >> n >> k;
    cout << binpow(n, k) << endl;
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