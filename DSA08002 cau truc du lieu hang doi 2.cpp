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
    queue<int> qu;
    while(q--) {
        string s;
        cin >> s;
        if(s == "PUSH") {
            int x;
            cin >> x;
            qu.push(x);
        }
        else if(s == "PRINTFRONT") {
            if(qu.size())
                cout << qu.front() << endl;
            else
                cout << "NONE\n";
        }
        else {
            if(qu.size()) {
                qu.pop();
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