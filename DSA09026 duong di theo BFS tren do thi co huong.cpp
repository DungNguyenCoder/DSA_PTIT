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
int parent[mx + 5];
vector<int> ans;
int n, m, s, t;

void BFS(int u) {
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while(!q.empty()) {
        int s = q.front();
        q.pop();
        for(int v : adj[s]) {
            if(!visited[v]) {
                visited[v] = true;
                parent[v] = s;
                q.push(v);
            }
        }
    }
}

void findPath(int s, int t) {
    BFS(s);

    if(!visited[t]) {
        cout << -1 << endl;
        return;
    }

    while(t != s) {
        ans.push_back(t);
        t = parent[t];
    }

    ans.push_back(s);
    reverse(ans.begin(), ans.end());

    for(int v : ans) {
        cout << v << " ";
    }
    cout << endl;
}

inline void solution() {
    ans.clear();
    for (int i = 0; i < mx + 5; i++)
        adj[i].clear();
    cin >> n >> m >> s >> t;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(visited, 0, sizeof(visited));
    memset(parent, 0, sizeof(parent));
    findPath(s, t);
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