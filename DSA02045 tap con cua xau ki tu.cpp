#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

string s;
int k,n;
vector<string> v;
string x;

void Try(int pos, int index) {
    for (int j = index; j < n; j++) {
        x[pos] = s[j];
        if(pos == k-1) {
            v.push_back(x);
        }
        else {
            Try(pos + 1, j + 1);
        }
    }
}

inline void solution() {
    v.clear();
    cin >> n >> s;
    sort(s.begin(), s.end());
    for (k = 1; k <= n; k++) {
        x = string(k, ' ');
        Try(0, 0);
    }
    sort(v.begin(), v.end());
    for(string x : v)
        cout << x << " ";
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