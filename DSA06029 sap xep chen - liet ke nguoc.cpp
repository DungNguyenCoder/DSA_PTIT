#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int>& a, int n) {
    vector<vector<int>> v;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        v.push_back(vector<int>(a.begin(), a.begin() + i + 1));
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for (auto x : v[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sortt(v, n);
    return 0;
}