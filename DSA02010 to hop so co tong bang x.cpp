#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int found = 0;

void Try(int start, int n, int a[], int sum, vector<int> &ans) {
    if(sum == 0) {
        found = 1;
        cout << "[";
        int len = ans.size();
        for (int j = 0; j < len; j++) {
            cout << ans[j];
            if(j != len - 1) {
                cout << " ";
            }
        }
        cout << "]";
        return;
    }

    for (int i = start; i < n; i++) {
        if(a[i] > sum) {
            break;
        }
        ans.push_back(a[i]);
        Try(i, n, a, sum - a[i], ans);
        ans.pop_back();
    }
}

inline void solution() {
    found = 0;
    int n, x;
    cin >> n >> x;
    vector<int> ans;
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    sort(a, a + n);
    Try(0, n, a, x, ans);
    if(!found)
        cout << -1;
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