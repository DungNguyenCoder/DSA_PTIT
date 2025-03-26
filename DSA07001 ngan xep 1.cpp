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
    string ope;
    while(cin >> ope) {
        if(ope == "push") {
            int x;
            cin >> x;
            st.push(x);
        }
        else if(ope == "pop") {
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            if(!st.empty()) {
                vector<int> v;
                stack<int> tmp = st;
                while(!tmp.empty()) {
                    v.push_back(tmp.top());
                    tmp.pop();
                }
                reverse(v.begin(), v.end());
                for(int x : v) {
                    cout << x << " ";
                }
            }
            else {
                cout << "empty";
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