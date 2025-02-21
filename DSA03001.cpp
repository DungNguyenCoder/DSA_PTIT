#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

void Try(int pos, int n, int &cnt) {
    if(n == 0) {
        return;
    }
    cnt += n / money[pos];
    n %= money[pos];
    // cout << n << " " << cnt << endl;
    Try(pos - 1, n, cnt);
}

inline void solution() {
    int n;
    cin >> n;
    int cnt = 0;
    Try(9, n, cnt);
    // cout << endl;
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