#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

void solve(int n) {
    int minLen = 1e9;
    int resX = -1, resY = -1;
    
    for (int y = 0; y <= n / 7; ++y) {
        int remain = n - 7 * y;
        if (remain % 4 == 0) {
            int x = remain / 4;
            if (x + y < minLen || (x + y == minLen && y < resY)) {
                minLen = x + y;
                resX = x;
                resY = y;
            }
        }
    }
    
    if (resX == -1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < resX; i++) cout << '4';
        for (int i = 0; i < resY; i++) cout << '7';
        cout << endl;
    }
}

inline void solution() {
    int n;
    cin >> n;
    solve(n);
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