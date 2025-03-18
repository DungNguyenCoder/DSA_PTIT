#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, x;
    cin >> n >> x;
    int a[n];
    int idx = 0;
    bool check = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == x && !check) {
            check = true;
            idx = i+1;
        }
    }
    cout << idx << endl;
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