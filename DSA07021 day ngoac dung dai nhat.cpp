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
    stack<int> st;
    int maxx = 0;
    st.push(-1);
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if(s[i] == '(') {
            st.push(i);
        }
        else {
            st.pop();
            if(!st.empty()) {
                maxx = max(maxx, i - st.top());
            }
            else {
                st.push(i);
            }
        }
    }
    cout << maxx << endl;
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