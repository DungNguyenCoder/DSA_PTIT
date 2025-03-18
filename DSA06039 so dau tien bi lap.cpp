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
    int a[n];
    unordered_map<int, int> mp;
    bool check = false;
    int ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if(mp[a[i]] == 2 && !check) {
            ans = a[i];
            check = true;
            break;
        }    
    }
    if (!check) {
        cout << "NO\n";
    }
    else {
        cout << ans << endl;
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