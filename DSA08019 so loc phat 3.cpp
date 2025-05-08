#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

void sinhSoLocPhat(int n) {
    int cnt = 0;
    queue<pair<ll, int>> q;
    q.push({6, 1});
    q.push({8, 1});
    vector<ll> v;
    while(!q.empty()) {
        auto [x, len] = q.front();
        q.pop();
        if(len > n) {
            continue;
        }
        v.push_back(x);
        ++cnt;
        q.push({x * 10 + 6, len + 1});
        q.push({x * 10 + 8, len + 1});
    }
    cout << cnt << endl;
    sort(v.begin(), v.end());
    n = v.size();
    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";
}

inline void solution() {
    int n;
    cin >> n;
    sinhSoLocPhat(n);
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