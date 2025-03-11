#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

inline void solution() {
    int n;
    cin >> n;
    vector<int> chan;
    vector<int> le;
    int tmp;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        if(i%2) {
            le.push_back(tmp);
        }
        else {
            chan.push_back(tmp);
        }
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());
    int idxChan = 0, idxLe = 0;
    for (int i = 1; i <= n; i++) {
        if(i%2) {
            cout << le[idxLe++] << " ";
        }
        else {
            cout << chan[idxChan++] << " ";
        }
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