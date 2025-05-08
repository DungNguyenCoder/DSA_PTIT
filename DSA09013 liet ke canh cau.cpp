#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;
int T, V, E;
vector<int> adj[MAX];
bool visited[MAX];
int tin[MAX], low[MAX], timer;
vector<pair<int, int>> bridges;

void dfs(int u, int parent) {
    visited[u] = true;
    tin[u] = low[u] = ++timer;
    for (int v : adj[u]) {
        if (v == parent) continue;
        if (visited[v]) {
            low[u] = min(low[u], tin[v]);
        } else {
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (low[v] > tin[u]) {
                bridges.push_back({min(u, v), max(u, v)});
            }
        }
    }
}

void tarjan() {
    timer = 0;
    bridges.clear();
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= V; ++i) {
        if (!visited[i]) dfs(i, -1);
    }
    sort(bridges.begin(), bridges.end());
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin >> T;
    while (T--) {
        cin >> V >> E;
        for (int i = 1; i <= V; ++i) adj[i].clear();

        for (int i = 0; i < E; ++i) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        tarjan();

        for (auto [u, v] : bridges) {
            cout << u << " " << v << " ";
        }
        cout << '\n';
    }
    return 0;
}
