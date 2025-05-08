#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

vector<int> ke[10001];
bool visited[10001];
int n,m,s;

void BFS(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u <<  " ";
        for(int v : ke[u]) {
            if(!visited[v]) {    
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

inline void solution() {
    for (int i = 0; i < 10001; i++) {
        ke[i].clear();
    }
    cin >> n >> m >> s;
    for(int i = 0; i < m; i++)
    {
        int x,y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
    BFS(s);
    cout << endl;
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