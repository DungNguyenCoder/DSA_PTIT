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
    int a[n + 5];
    int k = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    if(n == 1) {
        cout << 1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i+1]) {
            ++k;
        }
        else {
            break;
        }
    }
    if(k == n) {
        k = 0;
    }
    cout << k << endl;
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