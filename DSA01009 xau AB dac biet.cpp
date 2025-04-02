#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

char x[100];
int n, k;
int cnt = 0;

void out() {
    ++cnt;
    for (int i = 0; i < n; i++) {
        cout << x[i];
    }
    cout << endl;
}

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        x[i] = j + 'A';
        if(i == n-1) {
            bool check = true;
            for (int I = 0; I <= n - k; I++) {
                for (int J = I; J < I + k; J++) {
                    if(x[I] != 'A') {
                        check = false;
                        break;
                    }
                }
            }
            if(check)
                out();
        }
        else
            Try(i+1);
    }
}

inline void solution() {
    cin >> n >> k;
    Try(0);
    cout << cnt;
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