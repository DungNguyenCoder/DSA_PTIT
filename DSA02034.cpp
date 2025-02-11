#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

bool isOk(vector<int> v) {
    int n = v.size();
    for(int i = 1; i < n; i++) {
        if(abs(v[i] - v[i-1]) == 1) {
            return false;
        }
    }
    return true;
}

inline void solution() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    do {
        if(isOk(v)) {
            for(int i : v) {
                cout << i;
            }
            cout << endl;
        }   
    }   while(next_permutation(v.begin(),v.end()));
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