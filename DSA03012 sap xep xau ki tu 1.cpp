#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (char x : s) {
        mp[x]++;
    }
    for(auto x : mp) {
        if(x.second*2-1 > s.size()) {
            cout << -1 << endl;
            return;
        }
    }
    cout << 1 << endl;
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