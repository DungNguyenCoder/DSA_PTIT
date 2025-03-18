#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n, k;
vector<string> ans;

void Try(string s, int ones, int idx) {
    if(idx == n) {
        if(ones == k) {
            ans.push_back(s);
        }
        return;
    }

    Try(s + "0", ones, idx + 1);
    Try(s + "1", ones + 1, idx + 1);
}

inline void solution() {
    cin >> n >> k;
    ans.clear();
    Try("",0,0);
    for (const string &s : ans) {
        cout << s << endl;
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