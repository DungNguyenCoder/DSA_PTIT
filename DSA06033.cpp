#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.first < b.first;
}

inline void solution() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back({tmp, i});
    }
    sort(v.begin(),v.end(),cmp);
    int last = v[0].second;
    int ans = INT_MIN;
    for (int i = 1; i < n; i++) {
        if(v[i].second - last > ans) {
            ans = v[i].second - last;
        }
        last = min(last, v[i].second);
    }
    cout << ans << endl;
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