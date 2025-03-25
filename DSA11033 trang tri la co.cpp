#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e6;
const int mod = 1e9+7;  
#define TEST 0

map<int, int> a;
map<int, int> diff;

inline void solution() {
    int n;
    cin >> n;
    int x, y;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        diff[x]++;
        diff[y+1]--;
    }
    int sum = 0;
    for(auto it : diff) {
        sum += it.second;
        a[it.first] = sum;
    }
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        auto it = a.upper_bound(x);
        if(it == a.begin()) {
            cout << 0;
        }
        else {
            it--;
            cout << it->second;
        }
        cout << endl;
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