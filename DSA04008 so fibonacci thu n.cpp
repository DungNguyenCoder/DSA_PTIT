#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

struct matran {
    ll a[10][10];
    matran() {
        memset(a, 0, sizeof(a));
    }
    friend matran operator * (matran x, matran y) {
        matran res;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    res.a[i][j] += x.a[i][k]%mod * y.a[k][j]%mod;
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

matran binpow(matran a, int n) {
    if(n == 1) {
        return a;
    }
    matran tmp = binpow(a, n / 2);
    if(n%2 == 0) {
        return tmp * tmp;
    }
    return tmp * tmp * a;
}

inline void solution() {
    int n;
    cin >> n;
    matran x;
    x.a[0][0] = x.a[0][1] = x.a[1][0] = 1;
    x.a[1][1] = 0;
    matran res = binpow(x, n-1);
    cout << res.a[0][0];
    cout << endl;
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