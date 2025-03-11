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
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    int minn = INT_MAX;
    for (int i = 1; i < n; i++) {
        minn = min(minn, a[i] - a[i - 1]);
    }
    cout << minn << endl;
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