#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
        cout << "Buoc " << i + 1 << ": ";
        for (int x : a) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bubbleSort(a, n);

    return 0;
}
