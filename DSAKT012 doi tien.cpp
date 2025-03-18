#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int n;
vector<int> v;
vector<string> ans;

void in() {
	string tmp = "";
	tmp += '(';
	for(int x : v) {
		tmp += to_string(x) + " ";
	}
	tmp.pop_back();
	tmp += ')';
	ans.push_back(tmp);
}

void Try(int k, int sum) {
	for(int i=k; i>=1; i--) {
		if(sum + i <= n) {
			v.push_back(i);
			if(sum + i == n) {
				in();
			}
			else Try(i, sum+i);
			v.pop_back();
		}
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		v.clear();
		ans.clear();
		cin >> n;
		Try(n, 0);
		cout << ans.size() << endl;
		for(string x : ans) {
			cout << x << " ";
		}
		cout << endl;
	}
    return 0;
}