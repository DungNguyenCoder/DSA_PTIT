#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e6;
const int mod = 1e9+7;  
#define TEST 1

int snt[mx + 5];
vector<int> nt;

void sang() {
    snt[0] = 1;
    snt[1] = 1;
    for (int i = 2; i*i <= mx; i++) {
        if(snt[i] == 0) {
            for (int j = i * i; j <= mx; j += i) {
                snt[j] = 1;
            }
        }
    }
    for (int i = 0; i <= mx; i++) {
        if(!snt[i]) {
            nt.push_back(i);
        }
    }
}

inline void solution() {
    int n;
    cin >> n;
    int idx = 0;
    int num1 = nt[idx];
    while(num1 <= n/2) {
        if(snt[n-num1] == 0) {
            cout << num1 << " " << n-num1 << endl;
            return;
        }
        ++idx;
        num1 = nt[idx];
    }
    cout << -1 << endl;
}

int main() {
    faster();
    sang();
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