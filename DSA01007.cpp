#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

char c[2] = {'A', 'B'};
char a[15];
int n;

void output() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = 0; j < 2; j++) {
        a[i] = c[j];
        if(i == n) {
            output();
        }
        else {
            Try(i + 1);
        }
    }
}

inline void solution() {
    cin >> n;
    memset(a, 0, sizeof(a));
    Try(1);
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