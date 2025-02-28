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
    set<int> se;
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        se.insert(tmp);
        mp[tmp]++;
    }
    vector<int> a(se.begin(), se.end());
    int l = 0;
    int r = a.size() - 1;
    int cnt = 0;
    while(l <= r) {
        if(a[l] + a[r] == k) {
            if(l != r)
                cnt += mp[a[l]] * mp[a[r]];
            else
                cnt += mp[a[l]] * (mp[a[l]] - 1) / 2;
            ++l;
            --r;
        }
        else if(a[l] + a[r] > k) {
            --r;
        }
        else {
            ++l;
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