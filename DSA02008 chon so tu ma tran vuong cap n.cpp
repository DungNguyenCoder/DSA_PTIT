#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int n, k;
vector<vector<int>> v;
vector<int> line;
bool used[15];
int a[15][15];
int cntWay;

void backtrack(int row, int curSum) {
    if(curSum > k) {
        return;
    }

    if(row == n) {
        if(curSum == k) {
            v.push_back(line);
            ++cntWay;
        }
    }

    for (int col = 0; col < n; col++) {
        if(!used[col]) {
            used[col] = true;
            line.push_back(col + 1);
            backtrack(row + 1, curSum + a[row][col]);
            line.pop_back();
            used[col] = false;
        }
    }
}

inline void solution() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    backtrack(0, 0);
    cout << cntWay << endl;
    for(const auto &res : v) {
        for(auto val : res)
            cout << val << " ";
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