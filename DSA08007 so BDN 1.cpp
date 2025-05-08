#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int sinhNhiPhan(ll n) {
    int cnt = 0;
    queue<ll> q;
    q.push(1);
    while(!q.empty()) {
        ll s = q.front();
        q.pop();
        if(s > n)
            continue;
        ++cnt;
        q.push(s * 10);
        q.push(s * 10 + 1);
    }
    return cnt;
}

inline void solution() {
    ll n;
    cin >> n;
    cout << sinhNhiPhan(n) << endl;
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