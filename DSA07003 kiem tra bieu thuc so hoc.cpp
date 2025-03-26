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
    int n = s.size();
    bool check = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            st.push(s[i]);
        else if(s[i] == ')') {
            if(st.top() == '(') {
                check = true;
                break;
            }
            while(st.size() && st.top() !='(') {
                st.pop();
            }
            st.pop();
        }
    }
    if(check) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
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