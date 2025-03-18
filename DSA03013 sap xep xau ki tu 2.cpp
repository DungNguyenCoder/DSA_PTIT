#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int d;
    cin >> d;
    cin.ignore();
    string s;
    cin >> s;
    map<char, int> mp;
    for(char x : s) {
        mp[x]++;
    }
    int k = 0;
    int n = s.size();
    for(auto x : mp) {
        k = max(k, x.second);
    }
    if(k - (n-k)/(d-1) <= 1) {
        cout << 1;
    }
    else {
        cout << -1;
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