#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int binarySearch(int a[], int n, int x) {
    int l = 0;
    int r = n - 1;
    while(l <= r) {
        int m = (r + l) / 2;
        if(a[m] == x) {
            return m;
        }
        else if(a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return -1;
}

inline void solution() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    int ans = binarySearch(a, n, k);
    if(ans != -1) {
        cout << ans + 1;
    }
    else {
        cout << "NO";
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