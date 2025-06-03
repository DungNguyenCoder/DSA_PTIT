#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool cmp(const pair<int, pair<int, int>> &a, const pair<int, pair<int, int>> &b) {
    return a.second.second > b.second.second;
}

inline void solution() {
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> v(n);
    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
        maxDeadline = max(maxDeadline, v[i].second.first);
    }
    sort(v.begin(), v.end(), cmp);
    vector<int> timeSlot(maxDeadline + 5, 0);
    int maxProfit = 0;  
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = v[i].second.first; j >= 1; j--) {
            if(timeSlot[j] == 0) {
                timeSlot[j] = 1;
                ++cnt;
                maxProfit += v[i].second.second;
                break;
            }
        }
    }
    cout << cnt << " " << maxProfit << endl;
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