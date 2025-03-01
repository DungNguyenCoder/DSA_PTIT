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
    vector<int> v;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    int cnt = 0;
    auto it1 = lower_bound(v.begin(), v.end(), k);
    auto it2 = upper_bound(v.begin(), v.end(), k);
    if(it1 == it2) {
        cout << -1 << endl;
    }
    else {
        cnt = (it2 - v.begin()) - (it1 - v.begin());
        cout << cnt << endl;
    }
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