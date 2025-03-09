#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int>& a, int n) {
    vector<vector<int>> v;
    for (int i = 0; i < n - 1; ++i) {
        bool issort = false;
        for (int j = 1; j < n; j++) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                issort = true;
            }
        }
        if (!issort) break;
        v.push_back(a);
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        for (auto x : v[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

void test() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sortt(v, n);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test();
        cout << endl;
    }
}
