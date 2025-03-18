#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        if(!dq.empty() && dq.front() == i-k) {
            dq.pop_front();
        }
        while(!dq.empty() && a[dq.back()] <= a[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if(i >= k-1) {
            cout << a[dq.front()] << " ";
        }
    }
    cout << endl;
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