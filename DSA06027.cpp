#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int>& a, int n) {
    vector<vector<int>> v;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                swap(a[i], a[j]);
            }
        }
        v.push_back(a);
    }

    for (int i = v.size(); i >= 1; i--) {
        cout << "Buoc " << i << ": ";
        for (auto x : v[i - 1]) {
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
