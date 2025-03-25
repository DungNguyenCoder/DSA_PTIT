#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll solve(ll a, ll b, ll c) {
    ll delta = b * b - 4 * a * c;
    ll tmp = sqrt(delta);
    ll res = (-b + tmp) / (2 * a);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t;
    t = 1;
    while (t--) {
        ll x, y, z;
        cin >> x >> y >> z;
        ll tmp1 = x * (x - 1) / 2;
        ll tmp2 = (y + 2 * x) * (y - 1) / 2;
        cout << tmp1 + tmp2 + 1 << "\n";
        ll resx = 0, resy = 0;
        for (int i = 1; i <= 44721; i++) {
            ll j = solve(1, 2 * i - 1, -(2 * z - 2 - i * i + 3 * i));
            ll temp1 = i * (i - 1) / 2;
            ll temp2 = (j + 2 * i) * (j - 1) / 2;
            if (temp1 + temp2 + 1 == z) {
                cout << i << ' ' << j << '\n';
                break;
            }
        }
    }
}