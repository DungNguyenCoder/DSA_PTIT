#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int dau, cuoi;
    int v, e;
    cin >> v >> e;
    vector<vector<int>> mp(v+1);
    while(e--) {
        cin >> dau >> cuoi;
        mp[dau].push_back(cuoi);
    }
    for (int i = 1; i <= v; i++) {
        cout << i << ": ";
        for (int j = 0; j < mp[i].size(); j++) {
            cout << mp[i][j] << " ";
        }
        cout << endl;
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