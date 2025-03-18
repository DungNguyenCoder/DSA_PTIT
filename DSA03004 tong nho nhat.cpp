#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n;
    cin >> n;
    vector<int> v;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    ll num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if(i%2 == 0) {
            num1 = num1 * 10 + v[i];
        }
        else {
            num2 = num2 * 10 + v[i];
        }
    }
    ll ans = num1 + num2;
    cout << ans << endl;
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