#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n;
    cin >> n;
    vector<int> v;
    unordered_map<int, int> mp;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
        mp[tmp]++;
    }
    int cnt = 0;
    sort(v.begin(), v.end());
    for (int i = v.front(); i <= v.back(); i++) {
        if(mp[i] == 0) {
            ++cnt;
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