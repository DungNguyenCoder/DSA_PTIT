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
    stack<char> st;
    int cnt = 0;
    for(char c : s) {
        if(c == '(') {
            st.push(c);
        }
        else {
            if(st.size()) {
                st.pop();
            }
            else {
                ++cnt;
                st.push('(');
            }
        }
    }
    if(st.size()) {
        cnt += st.size() / 2;
    }
    cout << cnt << endl;
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