#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1


inline void solution() {
    int n;
    cin >> n;
    vector<int> v;
    vector<int> tmp;
    vector<vector<int>> permutation;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
        tmp.push_back(i + 1);
    }
    do {
        permutation.push_back(tmp);
    } while (next_permutation(tmp.begin(), tmp.end()));
    for (int i = 0; i < permutation.size(); i++) {
        if(v == permutation[i]) {
            cout << i + 1 << endl;
        }
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