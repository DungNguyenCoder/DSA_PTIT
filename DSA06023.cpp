#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define endl "\n"

const int mx = 1e5;
const int mod = 1e9+7;  
#define TEST 0

void sortt (vector<int>&a, int n) {
    for (int i = 0; i < n-1; i++) { 
        for (int j = i+1; j < n; j++) { 
            if (a[j] < a[i]) { 
                swap (a[i], a[j]); 
            } 
        } 
        cout << "Buoc " << i+1<<": "; 
        for (auto x : a) { 
            cout << x << " "; 
        } cout << endl; 
    } 
} 

inline void solution() { 
    int n; 
    cin >> n; 
    vector<int> v(n); 
    for (int i = 0; i < n; i++) { 
        cin >> v[i]; 
    } 
    sortt (v, n); 
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