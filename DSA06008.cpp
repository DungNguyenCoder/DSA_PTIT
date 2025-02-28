#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int countValidPairs(int x, vector<int> &Y, vector<int> &countY) {
    if (x == 0) return 0;
    if (x == 1) return countY[0];
    int pos = upper_bound(Y.begin(), Y.end(), x) - Y.begin();
    int count = Y.size() - pos;
    count += countY[0] + countY[1];
    if (x == 2) count -= (countY[3] + countY[4]);
    if (x == 3) count += countY[2];
    return count;
}

inline void solution() {
    int n, m;
    cin >> n >> m;
    vector<int> X(n), Y(m);
    vector<int> countY(1005, 0);
    for (int &x : X) cin >> x;
    for (int &y : Y) {
        cin >> y;
        countY[y]++;
    }
    sort(Y.begin(), Y.end());
    long long result = 0;
    for (int x : X) {
        result += countValidPairs(x, Y, countY);
    }
    cout << result << endl;
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