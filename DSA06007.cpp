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
    int b[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int start = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            start = i + 1;
            break;
        }
    }
    int end = n - 1;
    for (int i = n-1; i >= 0; i--) {
        if(a[i] != b[i]) {
            end = i + 1;
            break;
        }
    }
    cout << start << " " << end << endl;
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