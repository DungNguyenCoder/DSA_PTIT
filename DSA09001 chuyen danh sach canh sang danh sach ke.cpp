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
    map<int, vector<int>> mp;
    int v, e;
    cin >> v >> e;
    while(e--) {
        cin >> dau >> cuoi;
        mp[dau].push_back(cuoi);
        mp[cuoi].push_back(dau);
    }
    for(auto x : mp) {
        cout << x.first << ": ";
        sort(x.second.begin(), x.second.end());
        for (int y : x.second)
            cout << y << " ";
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