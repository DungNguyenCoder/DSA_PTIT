#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n;
vector<int> x;
vector<vector<int>> v;

int cnt = 0;

void Try(int i) {
    if(i == 0) {
        ++cnt;
        v.push_back(x);
    }
    else {
        int soLon = x.empty() ? n : x.back();
        for (int j = min(i, soLon); j >= 1; j--) {
            x.push_back(j);
            Try(i - j);
            x.pop_back();
        }
    }
}

inline void solution() {
    v.clear();
    cnt = 0;
    cin >> n;
    Try(n);
    cout << cnt << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << "(";
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j];
            if(j != v[i].size() - 1)
                cout << " ";
        }
        cout << ") ";
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