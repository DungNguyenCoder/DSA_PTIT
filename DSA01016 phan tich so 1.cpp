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

void in() {
    cout << "(";
    for (int i = 0; i < x.size(); i++) {
        cout << x[i];
        if(i != x.size() - 1)
            cout << " ";
    }
    cout << ") ";
}

void Try(int i) {
    if(i == 0)
        in();
    else {
        int soLon;
        if (x.empty()) {
            soLon = n;
        } else {
            soLon = x.back();
        }
        for (int j = min(i, soLon); j >= 1; j--) {
            x.push_back(j);
            Try(i - j);
            x.pop_back();
        }
    }
}

inline void solution() {
    cin >> n;
    Try(n);
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