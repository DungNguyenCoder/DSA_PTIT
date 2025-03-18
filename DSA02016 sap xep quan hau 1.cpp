#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n;
int board[15];
int ans = 0;

bool isSafe(int row, int col) {
    for(int i = 0; i < row; i++) {
        if(board[i] == col || abs(board[i]-col) == abs(i-row)) {
            return false;
        }
    }
    return true;
}

void Try(int row) {
    if(row == n) {
        ++ans;
        return;
    }
    for(int col = 0; col < n; col++) {
        if(isSafe(row,col)) {
            board[row] = col;
            Try(row+1);
        }
    }
}

inline void solution() {
    ans = 0;
    memset(board,0,sizeof(board));
    cin >> n;
    Try(0);
    cout << ans << endl;
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