#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

#define pii pair<int,int>
#define piii tuple<int,int,int>

int BFS(vector<vector<int>> &a, int m, int n) {
    vector<vector<int>> visited(m + 1, vector<int>(n + 1, 0));
    queue<piii> q;
    q.push({1, 1, 0});
    visited[1][1] = 1;

    while(!q.empty()) {
        auto [i, j, steps] = q.front();
        q.pop();
        if(i == m && j == n)
            return steps;

        int vals = a[i][j];

        if(j + vals <= n && !visited[i][j+vals]) {
            visited[i][j + vals] = true;
            q.push({i,j+vals,steps+1});
        }

        if(i + vals <= m && !visited[i+vals][j]) {
            visited[i + vals][j] = true;
            q.push({i + vals, j, steps + 1});
        }
    }
    return -1;
}

inline void solution() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m+1, vector<int>(n+1, 0));
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cout << BFS(a, m, n) << endl;
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