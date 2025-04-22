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
    for(char c : s)
    {
        if(isalpha(c))
            st.push(c + string());
        else
        {
            string b = st.top();
            st.pop();
            string a = st.top();
            st.pop();
            string C = "(" + a + c + b + ")";
            st.push(C);
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