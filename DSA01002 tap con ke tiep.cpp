#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int a[1005], n, k;

void result() {
	for (int i = 1; i <= k; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void Try() {
	int i = k;
	while (i > 0) {
		if (a[i] < n - k + i) break;
		i--;
	}
	if (i == 0) {
        for(int j = 1; j <= k; j++) {
            cout << j << " ";
        }
        cout << endl;
        return;
    }
	a[i]++;
	for (int j = i + 1; j <= k; j++) a[j] = a[j-1] + 1;
    result();
}


inline void solution() {
    cin >> n >> k;
    for(int i = 1; i <= k; i++) {
        cin >> a[i];
    }
	Try();
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