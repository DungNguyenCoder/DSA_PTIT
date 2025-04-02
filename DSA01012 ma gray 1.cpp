#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

void gray(int n) {
    vector<string> gray = {"0", "1"};
    for (int i = 2; i <= n; i++) {
        vector<string> new_gray;
        for (string &s : gray) new_gray.push_back("0" + s);
        for (int j = gray.size() - 1; j >= 0; j--) 
            new_gray.push_back("1" + gray[j]);

        gray = new_gray;
    }
    for (string &s : gray) cout << s << " ";
    cout << endl;
}

inline void solution() {
    int n;
    cin >> n;
    gray(n);
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