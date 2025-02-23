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
    int a[n + 5];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    priority_queue<int, vector<int>, greater<int>> pq_min;
    for (int i = 0; i < n; i++) {
        pq_min.push(a[i]);
    }
    ll sum = 0;
    int tmp = 0;
    while(pq_min.size() > 1) {
        tmp = pq_min.top();
        pq_min.pop();
        tmp += pq_min.top();
        pq_min.pop();
        sum += tmp;
        pq_min.push(tmp);
    }
    cout << sum << endl;
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