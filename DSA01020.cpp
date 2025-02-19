#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

void Try(string &s) {
    int n = s.size();
    int nho = 0;
    for (int i = n - 1; i >= 0; i--) {
        if(s[i] == '1') {
            s[i] = '0';
            nho = 0;
        }
        else {
            s[i] = '1';
            nho = 1;
        }
        if(nho == 0) {
            break;
        }
    }
}

inline void solution() {
    string s;
    cin >> s;
    Try(s);
    cout << s << endl;
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