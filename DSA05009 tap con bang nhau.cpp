#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool dp(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    if(sum%2)
        return false;
    int target = sum / 2;
    vector<bool> check(n + 1, false);
    check[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = target; j >= a[i]; j--) {
            if(check[j-a[i]] == true)
                check[j] = true;
        }
    }
    return check[target];
}

inline void solution() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(dp(a,n))
        cout << "YES\n";
    else {
        cout << "NO\n";
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