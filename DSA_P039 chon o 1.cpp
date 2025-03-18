#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

const int INF = INT_MAX;
const int MAXN = 25;

int N, a[MAXN][MAXN];
int u[MAXN], v[MAXN], p[MAXN], way[MAXN];

int hungarian() {
    vector<int> minv(N + 1);
    vector<bool> used(N + 1);

    for (int i = 1; i <= N; i++) {
        p[0] = i;
        fill(minv.begin(), minv.end(), INF);
        fill(used.begin(), used.end(), false);

        int j0 = 0;
        do {
            used[j0] = true;
            int i0 = p[j0], delta = INF, j1;

            for (int j = 1; j <= N; j++) {
                if (!used[j]) {
                    int cur = -a[i0][j] - u[i0] - v[j];
                    if (cur < minv[j]) {
                        minv[j] = cur;
                        way[j] = j0;
                    }
                    if (minv[j] < delta) {
                        delta = minv[j];
                        j1 = j;
                    }
                }
            }

            for (int j = 0; j <= N; j++) {
                if (used[j]) {
                    u[p[j]] += delta;
                    v[j] -= delta;
                } else {
                    minv[j] -= delta;
                }
            }
            j0 = j1;
        } while (p[j0] != 0);

        do {
            int j1 = way[j0];
            p[j0] = p[j1];
            j0 = j1;
        } while (j0);
    }

    int result = v[0];
    return result;
}

inline void solution() {
    memset(a,0,sizeof(a));
    memset(u,0,sizeof(u));
    memset(v,0,sizeof(v));
    memset(p,0,sizeof(p));
    memset(way,0,sizeof(way));
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> a[i][j];
        }
    }
    cout << hungarian() << endl;
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