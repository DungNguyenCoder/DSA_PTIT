#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 1

int a[1005] = {0}, n;

void result() {
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void Try() {
	int i = n-1;
	while (i > 0) {
		if (a[i] < a[i+1]) break;
		i--;
	}
	if (i == 0) {
        for(int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
        return; 
    }
	int j, k = n;
	while (a[k] < a[i]) k--;
	swap(a[i], a[k]);
	j = i + 1; k = n;
	while (j < k) {
		int tmp = a[j];
		a[j] = a[k];
		a[k] = tmp;
		j++; k--;
	}
	result();
}

inline void solution() {
	cin >> n;
	for(int i = 1; i <= n; i++) {
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