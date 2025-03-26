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
    for(char c : s) {
        if(isdigit(c)) {
            st.push(c - '0');
        }
        else {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
            int x;
            if(c == '+')
                x = a + b;
            else if(c == '-')
                x = a - b;
            else if(c == '*')
                x = a * b;
            else if(c == '/')
                x = a / b;
            st.push(x);
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