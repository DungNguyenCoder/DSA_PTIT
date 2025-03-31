#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    stack<ll> st;
    for(string c : v) {
        if(c.size() == 1 && (c == "+" || c == "-" || c == "*" || c == "/")) {
            ll b = st.top();
            st.pop();
            ll a = st.top();
            st.pop();
            ll x;
            if(c == "+")
                x = a + b;
            else if(c == "-")
                x = a - b;
            else if(c == "*")
                x = a * b;
            else if(c == "/")
                x = a / b;
            st.push(x);
        }
        else {
            st.push(stoll(c));
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