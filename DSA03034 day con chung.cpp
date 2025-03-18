#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

void timKiem(vector<int> &a, vector<int> &b, vector<int> &c) {
    int i = 0, j = 0, k = 0;
    vector<int> res;
    while(i < a.size() && j < b.size() && k < c.size()) {
        if(a[i] == b[j] && a[i] == c[k]) {
            res.push_back(a[i]);
            ++i;
            ++j;
            ++k;
        }
        else if(a[i] < b[j]) {
            ++i;
        }
        else if(b[j] < c[k]) {
            ++j;
        }
        else {
            ++k;
        }
    }
    if(res.empty()) {
        cout << "NO";
    }
    else {
        for(int x : res) {
            cout << x << " ";
        }
    }
    cout << endl;
}

inline void solution() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a, b, c;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }
    for (int i = 0; i < k; i++) {
        cin >> tmp;
        c.push_back(tmp);
    }
    timKiem(a, b, c);
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