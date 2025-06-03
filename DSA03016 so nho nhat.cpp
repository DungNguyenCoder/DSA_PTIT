#include <bits/stdc++.h>
using namespace std;

void findSmallestNumber(int D, int S) {
    if (S == 0) {
        if (D == 1) cout << "0\n";
        else cout << "-1\n";
        return;
    }

    if (S > 9 * D) {
        cout << "-1\n";
        return;
    }

    string result = "";
    for (int i = 0; i < D; i++) {
        for (int d = (i == 0 ? 1 : 0); d <= 9; d++) {
            if (S - d <= 9 * (D - i - 1)) {
                result += char(d + '0');
                S -= d;
                break;
            }
        }
    }

    cout << result << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int D, S;
        cin >> S >> D;
        findSmallestNumber(D, S);
    }
    return 0;
}
