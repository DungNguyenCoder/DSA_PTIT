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
    int n = s.size();
    stack<string> st;
    for (int i = n - 1; i >= 0; i--) {
        if(isalpha(s[i])) {
            st.push(s[i] + string());
        }
        else {
            string b = st.top();
            st.pop();
            string c = st.top();
            st.pop();
            string a = "(" + b + s[i] + c + ")";
            st.push(a);
        }
    }
    cout << st.top() << endl;
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