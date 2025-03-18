#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mp[tmp]++;
    }
    vector<pair<int, int>> v(mp.begin(), mp.end());
    n = v.size();
    int l = 0;
    int r = n - 1;
    ll cnt = 0;
    while(l < r) {
        tmp = v[l].first + v[r].first;
        if(tmp == k) {
            cnt += 1ll * v[l].second * v[r].second;
            ++l;
            --r;
        }
        else if(tmp < k) {
            ++l;
        }
        else {
            --r;
        }
    }
    for(auto x : v) {
        if(x.first * 2 == k) {
            cnt += 1ll * x.second * (x.second - 1) / 2;
            break;
        }
    }
    cout << cnt << endl;
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