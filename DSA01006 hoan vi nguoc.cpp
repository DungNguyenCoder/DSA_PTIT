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
    for (int i = 1; i <= n; i++) {
        a[i - 1] = n-i+1;
    }
    do {
        for (int i = 0; i < n; i++) {
            cout << a[i];
        }
        cout << " ";
    } while (prev_permutation(a, a + n));
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