#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    ll a[n1], b[n2], c[n3];
    vector<int> ans;
    for(ll &x : a) {
        cin >> x;
    }
    for(ll &x : b) {
        cin >> x;
    }
    for(ll &x : c) {
        cin >> x;
    }
    int l = 0, r = 0, k = 0;
    while(l < n1 && r < n2 && k < n3) {
        if(a[l] == b[r] && b[r] == c[k]) {
            ans.push_back(a[l]);
            ++l;
            ++r;
            ++k;
        }
        else if(a[l] < b[r]) {
            ++l;
        }
        else if(b[r] < c[k]) {
            ++r;
        }
        else {
            ++k;
        }
    }
    if(ans.empty()) {
        cout << -1;
    }
    else {
        for(auto x : ans) {
            cout << x << " ";
        }
    }
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