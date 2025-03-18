#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int n,k;
vector<int> nums;
vector<int> ans;

void Try(int pos) {
    if(ans.size() == k) {
        for(int x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    for (int i = pos; i < nums.size(); i++) {
        ans.push_back(nums[i]);
        Try(i + 1);
        ans.pop_back();
    }
}

inline void solution() {
    cin >> n >> k;
    set<int> tmp;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        tmp.insert(x);
    }
    n = tmp.size();
    nums.assign(tmp.begin(), tmp.end());
    Try(0);
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