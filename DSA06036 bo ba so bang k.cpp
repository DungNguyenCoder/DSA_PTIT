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
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    for (int i = 0; i < n - 2; i++) {
        int l = i + 1;
        int r = n - 1;
        while (l < r) {
            int tmp = a[i] + a[l] + a[r];
            if(tmp == k) {
                cout << "YES\n";
                return;
            }
            else if(tmp < k) {
                ++l;
            }
            else {
                --r;
            }
        }
    }
    cout << "NO\n";
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