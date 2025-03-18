#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

void Try(string &s) {
    int i = s.size()-1;
    while (s[i] == '1') {
        s[i] = '0';
        i--;
    }
    s[i] = '1';
    cout << s << endl;
}

inline void solution() {
    string s;
    cin >> s;
    int cnt = 0;
    for(char x : s) {
        if(x == '1') {
            ++cnt;
        }
    }
    if(cnt == s.size()) {
        for(int i = 0; i < cnt; i++) {
            cout << '0';
        }
    }
    else {
        Try(s);
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