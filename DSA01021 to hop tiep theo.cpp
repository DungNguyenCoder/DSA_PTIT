#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int n, k;
int a[45];
int b[45];
int check = 0;

void Try() {
    int i = k;
	while (i > 0) {
		if (a[i] < n - k + i) break;
		i--;
	}
	if (i == 0) {
        check = 1;
        return;
    }
	a[i]++;
	for (int j = i + 1; j <= k; j++) 
        a[j] = a[j-1] + 1;
}

inline void solution() {
    check = 0;
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    Try();
    if(check == 1) {
        cout << k << endl;
    }
    else {
        int i = 1;
        int j = 1;
        int cnt = 0;
        vector<int> v;
        for (int i = 1; i <= k; i++) {
            v.push_back(a[i]);
        }
        for (int i = 1; i <= k; i++) {
            if (find(v.begin(), v.end(), b[i]) == v.end()) {
                ++cnt;
            }
        }
        cout << cnt << endl;
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