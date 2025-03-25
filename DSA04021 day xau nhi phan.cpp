#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

ll len[93];

void fibo() {
    len[0] = 0;
    len[1] = 1;
    for (int i = 2; i < 93; i++) {
        len[i] = len[i - 1] + len[i - 2];
    }
}

char find(ll n, ll k) {
    if(n == 1)
        return '0';
    if(n == 2)
        return '1';
    if(k > len[n-2])
        return find(n - 1, k - len[n - 2]);
    return find(n - 2, k);
}

inline void solution() {
    ll n, i;
    cin >> n >> i;
    cout << find(n, i) << endl;
}

int main() {
    fibo();
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