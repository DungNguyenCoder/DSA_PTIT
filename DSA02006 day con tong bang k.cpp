#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n,k;
int a[100];
int v[100];

vector<vector<int>> res;

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        a[i] = j;
        if(i == n) {
            int s = 0;
            for(int l = 1; l <= n; l++) {
                if(a[l]) {
                    s += v[l];
                }
            }
            if(s == k) {
                vector<int> tmp;
                for(int l = 1; l <= n; l++) {
                    if(a[l])
                        tmp.push_back(v[l]);
                }
                res.push_back(tmp);
            }
        }
        else 
            Try(i+1);
    }
}

inline void solution() {
    memset(a,0,sizeof(a));
    res.clear();
    res.shrink_to_fit();
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    sort(v+1,v+n+1);
    Try(1);
    if(res.empty()) {
        cout << -1 << endl;
        return;
    }
    sort(res.begin(),res.end());
    for(int i = 0; i < res.size(); i++) {
        cout << "[";
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];
            if(j < res[i].size()-1) 
                cout << " ";
        }
        cout << "]";
        cout << " ";
    }
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