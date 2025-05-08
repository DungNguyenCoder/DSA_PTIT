#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e4;
const int mod = 1e9+7;  
#define TEST 1

vector<int> adj[mx + 5];
bool visited[mx + 5];
int n, m, s, t;

void BFS(int u) {
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) {
            BFS(v);
        }
    }
}

void findPath(int s, int t) {
    BFS(s);
    if(!visited[t]) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}

inline void solution() {
    for (int i = 0; i < mx + 5; i++)
        adj[i].clear();
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int q;
    cin >> q;
    while(q--) {
        memset(visited, 0, sizeof(visited));
        cin >> s >> t;
        findPath(s, t);
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