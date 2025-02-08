#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

char c;
int k;
string a;

void Try(int i) {
    if(a.size() == k) {
        cout << a << endl;
        return;
    }
    for(char st = i; st <= c; st++) {
        if(a.empty() || a.back() <= st) {
            a.push_back(st);
            Try(i);
            a.pop_back();
        }
    } 
}

inline void solution() {
    cin >> c >> k;
    Try('A');
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