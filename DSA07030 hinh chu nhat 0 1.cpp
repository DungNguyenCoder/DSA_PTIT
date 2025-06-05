#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define pb push_back
using namespace std;
const int MOD = 1e9 + 7;

int n, m;
int kq(vector<int> &arr)
{
    stack<int> s1, s2;
    vector<int> res1(m, -1);
    vector<int> res2(m, m);
    for (int i=0; i<m; ++i)
    {
        while (!s1.empty() && arr[i] <= arr[s1.top()]) 
            s1.pop();
        if (!s1.empty()) 
            res1[i] = s1.top();
        s1.push(i);
    }
    for (int i=m-1; i>=0; --i)
    {
        while (!s2.empty() && arr[i] <= arr[s2.top()]) 
            s2.pop();
        if (!s2.empty()) 
            res2[i] = s2.top();
        s2.push(i);
    }
    int res = 0;
    for (int i=0; i<m; ++i)
    {
        res = max(res, arr[i] * (res2[i] - res1[i] - 1));
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        vector<vector<int>> matrix (n, vector<int>(m));
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j) 
                cin >> matrix[i][j];
        }
        int maxA = 0;
        vector<int> arr(m, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (!matrix[i][j]) arr[j] = 0;
                else arr[j]++;
            }
            maxA = max(maxA, kq(arr));
        }
        cout << maxA << '\n';
    }
}