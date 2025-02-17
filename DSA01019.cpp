#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n;
vector<string> ans;

void Try(string s, int idx) {
    if(idx == n) {
        if(s.back() == 'A')
            ans.push_back(s);
        return;
    }
    if(idx == 0) {
        Try(s + "H", idx + 1);
    }
    else if(idx == n-1) {
        Try(s + "A", idx + 1);
    }
    else {
        Try(s + "A", idx + 1);
        if(s.size() >= 2 && s[idx-1] != 'H') {
            Try(s + "H", idx + 1);
        }
    }
}

inline void solution() {
    cin >> n;
    ans.clear();
    Try("", 0);
    for(const string &s : ans) {
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