#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int x[100], n, k, s;
int cnt = 0;

void Try(int i) {
    for(int j = x[i-1]+1; j <= n-k+i; j++) {
        x[i] = j;
        if(i == k) {
            int sum = 0;
            for (int l = 1; l <= k; l++) {
                sum += x[l];
            }
            if(sum == s)
                cnt++;
        }
        else
            Try(i+1);
    }
}

inline void solution() {
    while(1) {
        cin >> n >> k >> s;
        if(n == 0 && k == 0 && s == 0) {
            break;
        }
        Try(1);
        cout << cnt << endl;
        cnt = 0;
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