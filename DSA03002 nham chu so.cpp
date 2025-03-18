#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

string fiveToSix(string a) {
    for(char &x : a) {
        if(x == '5')
            x = '6';
    }
    return a;
}

string sixToFive(string &a) {
    for(char &x : a) {
        if(x == '6')
            x = '5';
    }
    return a;
}

inline void solution() {
    string a, b;
    cin >> a >> b;
    int min = stoi(sixToFive(a)) + stoi(sixToFive(b));
    int max = stoi(fiveToSix(a)) + stoi(fiveToSix(b));
    cout << min << " " << max;
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