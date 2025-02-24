#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    return a.second < b.second;
}

inline void solution() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    pair<int, int> tmp1;
    for (int i = 0; i < n; i++) {
        cin >> tmp1.first >> tmp1.second;
        v.push_back(tmp1);
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 0;
    int last = 0;
    for(auto x : v) {
        int start = x.first;
        int end = x.second;
        if(start >= last) {
            ++cnt;
            last = end;
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