#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

inline void solution() {
    stack<int> st;
    int q;
    cin >> q;
    cin.ignore();
    while(q--) {
        string ope;
        cin >> ope;
        if(ope == "PUSH") {
            int x;
            cin >> x;
            cin.ignore();
            st.push(x);
        }
        else if(ope == "POP") {
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            if(!st.empty()) {
                cout << st.top();
            }
            else {
                cout << "NONE";
            }
            cout << endl;
        }    
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