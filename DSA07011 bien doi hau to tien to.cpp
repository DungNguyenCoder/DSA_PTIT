#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
#define ll long long
#define fi first
#define se second
#define vt vector
#define db double

const int mx = 1e5;
const int mod = 1e9+7;
#define TEST 1

inline void solution()
{
    string s;
    cin >> s;
    int n = s.size();
    stack<string> st;
    for(int i = 0; i < n; i++)
    {
        if(isalpha(s[i]))
            st.push(s[i] + string());
        else
        {
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();
            string c = s[i] + string() + b + a;
            st.push(c);
        }
    }
    cout << st.top() << "\n";
}

int main()
{
    faster();
    int t;
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