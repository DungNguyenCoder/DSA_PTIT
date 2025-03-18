#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool cmp(const pair<int,int> &a, pair<int,int> &b) {
    return a.second < b.second;
}

inline void solution() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int a[n];
    int b[n];
    for(int &x : a) {
        cin >> x;
    }
    for(int &x : b) {
        cin >> x;
    }
    pair<int, int> pr;
    for (int i = 0; i < n; i++) {
        pr.first = a[i];
        pr.second = b[i];
        v.push_back(pr);
    }
    sort(v.begin(), v.end(), cmp);
    int cnt = 0;
    int last = 0;
    for (int i = 0; i < v.size(); i++) {
        int start = v[i].first;
        int end = v[i].second;
        if(start >= last) {
            ++cnt;
            last = end;
        }
    }
    cout << cnt << endl;
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