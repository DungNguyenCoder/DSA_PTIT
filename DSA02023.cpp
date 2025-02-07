#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int n,k;
vector<vector<int>> ans;
vector<int> x(35,0);

void Try(int i) {
    for(int j = x[i-1]+1; j <= n-k+i; j++) {
        x[i] = j;
        if(i == k) {
            vector<int> temp(x.begin() + 1, x.begin() + k + 1);
            ans.push_back(temp);
        }
        else {
            Try(i+1);
        }
    }
}

inline void solution() {
    cin >> n >> k;
    set<string> tmp;
    string x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        tmp.insert(x);
    }
    vector<string> v(tmp.begin(),tmp.end());
    n = v.size();
    Try(1);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[i].size(); j++) {
            cout << v[ans[i][j]-1] << " ";
        }
        cout << endl;
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