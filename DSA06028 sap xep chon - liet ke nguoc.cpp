#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int>& a, int n) {
    vector<vector<int>> v;

    for (int i = 0; i < n - 1; i++) {
        int min_x = a[i];
        int min_i = i;

        for (int j = i + 1; j < n; j++) {
            if (a[j] < min_x) {
                min_x = a[j];
                min_i = j;
            }
        }

        swap(a[i], a[min_i]);
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
