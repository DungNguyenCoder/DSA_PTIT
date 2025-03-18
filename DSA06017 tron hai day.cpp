#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, m;
    cin >> n >> m;
    int c[n + m];
    for(int &x : c) {
        cin >> x;
    }
    sort(c, c + n + m);
    for(int x : c) {
        cout << x << " ";
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