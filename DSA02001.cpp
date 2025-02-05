#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n;
vector<int> b;

void Try() {
    cout << "[";
    for(int i = 0; i < b.size(); i++) {
        cout << b[i];
        if(i != b.size() - 1) {
            cout << " ";
        }
    }
    cout << "]\n";
    for(int i = 0; i < b.size()-1; i++) {
        b[i] += b[i+1];
    }
    b.pop_back();
    if(b.size() == 0) {
        return;
    }
    else {
        Try();
    }
}

inline void solution() {
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++) {
        cin >> x;
        b.push_back(x);
    }
    Try();
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