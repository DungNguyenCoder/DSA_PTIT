#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int cnt = 0;
int m,n;
int a[105][105];

void way(int i, int j) {
    if(i == m-1 && j == n-1) {
        ++cnt;
        return;
    }
    if(i < m) {
        way(i+1,j);
    }
    if(j < n) {
        way(i,j+1);
    }
}

inline void solution() {
    cnt = 0;
    memset(a,0,sizeof(a));
    cin >> m >> n;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    way(0,0);
    cout << cnt << endl;
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