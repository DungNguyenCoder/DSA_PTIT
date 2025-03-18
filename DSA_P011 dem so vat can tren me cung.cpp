#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};

vector<string> a;
int n,m;

void loang(int i, int j) {
    a[i][j] = '.';
    for(int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '#') {
            loang(i1,j1);
        }
    }
}
 
inline void solution() {
    cin >> n;
    cin >> m;
    cin.ignore();
    string tmp;
    for(int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] == '#') {
                ++cnt;
                loang(i,j);
            }
        }
    }
    cout << cnt;
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