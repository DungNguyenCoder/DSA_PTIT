#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

int cnt = 0;

void Try(vector<int>& arr, int k, int start, vector<int>& combination) {
    if (combination.size() == k) {
        bool check = true;
        for (int i = 0; i < combination.size() - 1; i++) {
            if(combination[i] >= combination[i+1]) {
                check = false;
                break;
            }
        }
        if(check) {
            ++cnt;
        }
        return;
    }

    for (int i = start; i < arr.size(); i++) {
        combination.push_back(arr[i]);
        Try(arr, k, i + 1, combination);
        combination.pop_back();
    }
}

inline void solution() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int &x : arr)
        cin >> x;
    vector<int> combination;
    Try(arr, k, 0, combination);
    cout << cnt << endl;
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