#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

char x[100];
int n, k;
int cnt = 0;
vector<string> v;

void out() {
    ++cnt;
    string s;
    for (int i = 0; i < n; i++) {
        s.push_back(x[i]);
    }
    v.push_back(s);
}

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        x[i] = j + 'A';
        if(i == n-1) {
            int check = 0;
            int cntA = 0;
            for (int I = 0; I <= n - k; I++) {
                cntA = 0;
                for (int J = I; J < I + k; J++) {
                    if(x[J] == 'A') {
                        ++cntA;
                    }
                }
                if(cntA == k) {
                    check++;
                }
            }
            if(check == 1) {
                out();
            }
        }
        else
            Try(i+1);
    }
}

inline void solution() {
    cin >> n >> k;
    Try(0);
    cout << cnt << endl;
    for(string s : v) {
        cout << s << endl;
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