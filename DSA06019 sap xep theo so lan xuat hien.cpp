#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
    if(a.second != b.second) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

inline void solution() {
    int n;
    cin >> n;
    map<int, int> mp;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mp[tmp]++;
    }
    vector<pair<int, int>> v(mp.begin(),mp.end());
    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        for (int i = 0; i < x.second; i++) {
            cout << x.first << " ";
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