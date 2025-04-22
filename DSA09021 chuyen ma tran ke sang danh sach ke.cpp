#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

inline void solution() {
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> v(n+1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(a[i][j] == 1) {
                v[i].push_back(j);
            }
        }
    }
    for (int i = 0; i < v.size(); i++) {
        int check = 0;
        for (int j = 0; j < v[i].size(); j++) {
            check = 1;
            cout << v[i][j] << " ";
        }
        if(check)
            cout << endl;
    }
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