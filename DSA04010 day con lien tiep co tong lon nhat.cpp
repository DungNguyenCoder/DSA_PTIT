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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    int bestMax = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        bestMax = max(sum, bestMax);
        if(sum < 0) {
            sum = 0;
        }
    }
    cout << bestMax << endl;
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