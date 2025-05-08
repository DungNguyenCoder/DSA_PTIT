#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

ll soBDN(int n) {
    queue<ll> q;
    q.push(1);
    while(!q.empty()) {
        ll x = q.front();
        q.pop();
        if(x % n == 0) {
            return x;
        }
        q.push(x * 10);
        q.push(x * 10 + 1);
    }
    return -1;
}

inline void solution() {
    int n;
    cin >> n;
    cout << soBDN(n) << endl;
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