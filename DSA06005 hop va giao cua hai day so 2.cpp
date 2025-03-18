#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n,m;
    cin >> n >> m;
    int tmp;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        mp[tmp]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        mp[tmp]++;
    }
    for(auto x : mp) {
        if(x.second >= 1) {
            cout << x.first << " ";
        }
    }
    cout << endl;
    for(auto x : mp) {
        if(x.second == 2) {
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