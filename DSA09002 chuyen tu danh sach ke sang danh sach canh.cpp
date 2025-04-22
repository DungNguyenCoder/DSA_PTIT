#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

inline void solution() {
    int n;
    cin >> n;
    cin.ignore();
    set<pair<int, int>> se;
    for (int i = 1; i <= n; i++) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> v;
        string num;
        while(ss >> num) {
            v.push_back(stoi(num));
        }
        for (int j = 0; j < v.size(); j++) {
            pair<int, int> tmp;
            tmp.first = min(i,v[j]);
            tmp.second = max(i,v[j]);
            se.insert(tmp);
        }
        v.clear();
    }
    for(auto x : se) {
        cout << x.first << " " << x.second << endl;
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