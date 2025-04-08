#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int a[50];

bool Try(int k, int n) {
	int i = k;
	while (i > 0 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) 
        return false;
	a[i]++;
	for (int j = i + 1; j <= k; j++) 
        a[j] = a[j-1] + 1;
    return true;
}

inline void solution() {
    int n, k;
    cin >> n >> k;
    int b[k+1];
    int cnt = 0;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    bool check = Try(k, n);  
    if(check == false) {
        cout << k << endl;
    }
    else {
        for (int i = 1; i <= k; i++) {
            bool found = false;
            for (int j = 1; j <= k; j++) {
                if(a[i] == b[j]) {
                    found = true;
                    break;
                }
            }
            if(!found)
                ++cnt;
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