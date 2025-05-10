#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

vector<string> res;
string ans;
int found = 0;

void Try(int i, int j, int n, vector<vector<int>> &a) {
    a[i][j] = 0;
    if(i == n - 1 && j == n - 1) {
        res.push_back(ans);
        found = 1;
        return;
    }

    if(i + 1 < n && a[i+1][j] == 1) {
        ans.push_back('D');
        Try(i + 1, j, n, a);
        ans.pop_back();
        a[i + 1][j] = 1;
    }

    if(j + 1 < n && a[i][j+1] == 1) {
        ans.push_back('R');
        Try(i, j + 1, n, a);
        ans.pop_back();
        a[i][j + 1] = 1;
    }

    if(i - 1 >= 0 && a[i - 1][j] == 1) {
        ans.push_back('U');
        Try(i - 1, j, n, a);
        ans.pop_back();
        a[i - 1][j] = 1;
    }

    if(j - 1 >= 0 && a[i][j - 1] == 1) {
        ans.push_back('L');
        Try(i, j - 1, n, a);
        ans.pop_back();
        a[i][j - 1] = 1;
    }
}

inline void solution() {
    res.clear();
    found = 0;
    ans.clear();
    int n;
    cin >> n;
    vector<vector<int>> a(n + 1, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    if(a[0][0] == 0 || a[n-1][n-1] == 0) {
        cout << -1 << endl;
        return;
    }
    Try(0, 0, n, a);
    sort(res.begin(), res.end());
    for(auto x : res) {
        cout << x;
        cout << " ";
    }
    if(!found)
        cout << -1;
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