#include <bits/stdc++.h>
using namespace std;

void sortt(vector<int>& a, int n) {
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }

        cout << "Buoc " + to_string(i) + ": ";
        for (int j = 0; j <= i; ++j) {
            cout << a[j] << " ";
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
}
