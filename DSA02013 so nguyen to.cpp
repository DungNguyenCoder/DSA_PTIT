#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int nguyenTo[205];
int nt[205];
int idx = 0;

void sang() {
    nguyenTo[0] = 1;
    nguyenTo[1] = 1;
    for (int i = 2; i * i <= 200; i++) {
        if(nguyenTo[i] == 0) {
            for (int j = i * i; j <= 200; j += i) {
                nguyenTo[j] = 1;
            }
        }
    }
    for (int i = 0; i <= 200; i++) {
        if(nguyenTo[i] == 0) {
            nt[idx++] = i;
        }
    }
}

int n, k, s;
int cnt;
vector<int> tmp;
vector<vector<int>> ans;

void Try(int start, int depth, int sum) {
    if(sum == s && depth == n) {
        ++cnt;
        ans.push_back(tmp);
        return;
    }
    if(depth >= n || sum > s)
        return;

    for (int i = start; i < idx && nt[i] + sum <= s; i++) {
        if(nt[i] > k) {
            tmp.push_back(nt[i]);
            Try(i + 1, depth + 1, sum + nt[i]);
            tmp.pop_back();
        }
    }
}


inline void solution() {
    cin >> n >> k >> s;
    cnt = 0;
    tmp.clear();
    ans.clear();
    int start = 0;
    while (start < idx && nt[start] <= k) start++;
    Try(start, 0, 0);
    cout << cnt << endl;
    for(auto v : ans) {
        for(int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    faster();
    int t;
    sang();
    if(TEST) {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--) {
        solution();
    }
}