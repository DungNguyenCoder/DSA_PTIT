#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

inline void solution() {
    int q;
    cin >> q;
    deque<int> dq;
    while(q--) {
        string s;
        cin >> s;
        if(s == "PUSHFRONT") {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "PRINTFRONT") {
            if(dq.size())
                cout << dq.front() << endl;
            else
                cout << "NONE\n";
        }
        else if(s == "POPFRONT") {
            if(dq.size()) {
                dq.pop_front();
            }
        }
        else if(s == "PUSHBACK") {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "PRINTBACK") {
            if(dq.size())
                cout << dq.back() << endl;
            else
                cout << "NONE\n";
        }
        else {
            if(dq.size()) {
                dq.pop_back();
            }
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