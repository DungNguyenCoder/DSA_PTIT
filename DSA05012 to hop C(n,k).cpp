#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
bool TEST = 1;

ll c[1001][1001];
void tohop()
{
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
                c[i][j] = 1;
            else
            {
                c[i][j] = c[i-1][j-1] + c[i-1][j];
                c[i][j] %= mod;
            }
        }
    }
}

void solution()
{
    ll n,k;
    cin >> n >> k;
    cout << c[n][k] << endl;
}

int main()
{
    faster();
    int t;
    tohop();
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }
    else        t = 1;
    while(t--)
    {
        solution();
    }
}