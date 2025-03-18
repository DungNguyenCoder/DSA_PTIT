#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int n;
int a[1000];

void out() {
    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        a[n-i+1] = j;
        if(i == ceil((1.0*n)/2)) {
            out();
        }
        else {
            Try(i+1);
        }
    }
}

inline void solution() {
    cin >> n;
    Try(1);
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