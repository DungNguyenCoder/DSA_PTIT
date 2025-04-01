#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

inline void solution() {
    int n;
    cin >> n;
    queue<int> q;
    while(n--) {
        int thaoTac;
        cin >> thaoTac;
        switch (thaoTac) {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                if(q.size())
                    cout << "NO\n";
                else
                    cout << "YES\n";
                break;
            case 3:
                int x;
                cin >> x;
                q.push(x);
                break;
            case 4:
                if(!q.empty()) {
                    q.pop();
                }
                break;
            case 5:
                if(!q.empty())
                    cout << q.front() << endl;
                else
                    cout << -1 << endl;
                break;
            case 6:
                if(!q.empty())
                    cout << q.back() << endl;
                else
                    cout << -1 << endl;
                break;
        }
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