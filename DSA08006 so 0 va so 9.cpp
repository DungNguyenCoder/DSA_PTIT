#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

ll res(int n) {
    queue<string> q;
    q.push("9");
    while(1) {
        ll tmp = stoll(q.front());
        q.push(q.front() + "0");
        q.push(q.front() + "9");
        q.pop();
        if(tmp % n == 0)
            return tmp;
    }
}

inline void solution() {
    int n;
    cin >> n;
    cout << res(n) << endl;
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