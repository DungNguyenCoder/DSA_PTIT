#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int n;
int a[25];
vector<vector<int>> ans;
vector<string> res;
vector<int> tmp;

void Try(int i) {
    if(tmp.size() > 1) {
        ans.push_back(tmp);
    }
    for(int j = i; j < n; j++) {
        if(tmp.empty() || a[j] > tmp.back()) {
            tmp.push_back(a[j]);
            Try(j+1);
            tmp.pop_back();
        }
    }
}

inline void solution() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Try(0);
    for(int i = 0; i < ans.size(); i++) {
        string tmp = "";
        for(int j = 0; j < ans[i].size(); j++) {
            tmp += to_string(ans[i][j]) + " ";
        }
        tmp.pop_back();
        res.push_back(tmp);
    }
    sort(res.begin(),res.end());
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
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