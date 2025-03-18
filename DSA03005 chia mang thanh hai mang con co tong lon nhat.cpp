#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n, k;
    cin >> n >> k;
    int tmp;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        if(k <= n/2) {
            if(i < k) {
                sum1 += v[i];
            }
            else {
                sum2 += v[i];
            }
        }
        else {
            if(i < n-k) {
                sum1 += v[i];
            }
            else {
                sum2 += v[i];
            }    
        }
    }
    cout << sum2 - sum1 << endl;
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