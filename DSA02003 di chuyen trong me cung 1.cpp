#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int a[15][15];
int n;

string way;
vector<string> v;

void Try(int i, int j) {
    if(i == n-1 && j == n-1) {
        v.push_back(way);
        return;
    }
    if(i+1 < n && a[i+1][j]) {
        way.push_back('D');
        Try(i+1,j);
        way.pop_back();
    }
    if(j+1 < n && a[i][j+1]) {
        way.push_back('R');
        Try(i,j+1);
        way.pop_back();
    }
}

inline void solution() {
    v.clear();
    v.shrink_to_fit();
    way = "";
    memset(a,0,sizeof(a));
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    if(a[0][0] == 0 || a[n-1][n-1] == 0) {
        cout << -1 << endl;
        return;
    }
    Try(0,0);
    if(!v.empty()) {
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
    else {
        cout << -1;
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