#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

void towerOfHanoi(int n, char a, char b, char c) {
    if(n == 1) {
        cout << a << " -> " << c << endl;
        return;
    }
    towerOfHanoi(n-1,a,c,b);
    cout << a << " -> " << c << endl;
    towerOfHanoi(n-1,b,a,c);
}

inline void solution() {
    int n;
    cin >> n;
    towerOfHanoi(n,'A','B','C');

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