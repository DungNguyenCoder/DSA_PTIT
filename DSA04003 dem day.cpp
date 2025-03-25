#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 123456789;  
#define TEST 1

ll binpow(ll a, ll b) {
    if(b == 0)
        return 1;
    ll x = binpow(a, b / 2);
    if(b%2 == 0) {
        return (x*x) % mod;
    }
    return (((x * x) % mod) * a) % mod;
}

inline void solution() {
    ll n;
    cin >> n;
    cout << binpow(2, n - 1) << endl;
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