#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

bool nguyenAm(char c) {
    return c == 'A' || c == 'E';
}

bool isOk(string s) {
    int n = s.size();
    for(int i = 1; i < n-1; i++) {
        if(nguyenAm(s[i]) && !nguyenAm(s[i-1]) && !nguyenAm(s[i+1])) {
            return false;
        }
    }
    return true;
}

inline void solution() {
    char c;
    cin >> c;
    string ans = "";
    for(char i = 'A'; i <= c; i++) {
        ans += i;
    }
    do {
        if(isOk(ans))
                cout << ans << endl;
    }   while(next_permutation(ans.begin(),ans.end()));
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